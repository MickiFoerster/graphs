#include "graphs.h"
#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

node_t *newNode(void *_data) {
  node_t *node = (node_t *)malloc(sizeof(node_t));
  if (node) {
    node->data = _data;
    node->visited = false;
    node->neighbours = NULL;
  }
  return node;
}

neighbour_t *newNeighbour(node_t *node) {
  neighbour_t *n = (neighbour_t *)malloc(sizeof(neighbour_t));
  if (n) {
    n->neighbour = node;
    n->next = NULL;
  }
  return n;
}

bool connectNodes(node_t *node, node_t *neighbour) {
  if (node == NULL || neighbour == NULL) {
    return false;
  }

  if (node->neighbours == NULL) {
    node->neighbours = newNeighbour(neighbour);
    return (node->neighbours != NULL);
  }

  neighbour_t *n = node->neighbours;
  while (n->next != NULL) {
    n = n->next;
  }
  assert(n->next == NULL);
  n->next = newNeighbour(neighbour);

  return (n->next != NULL);
}

static void print(node_t *node) {
  if (node->visited) {
    return;
  }
  node->visited = true;
  neighbour_t *n = node->neighbours;
  while (n != NULL) {
    printf("    %s -- %s\n", (const char *)node->data,
           (const char *)n->neighbour->data);
    print(n->neighbour);
    n = n->next;
  }
}

static void unvisit(node_t *node) {
  if (!node->visited) {
    return;
  }
  node->visited = false;
  neighbour_t *n = node->neighbours;
  while (n != NULL) {
    unvisit(n->neighbour);
    n = n->next;
  }
}

void dot_dump(node_t *node) {
  printf("graph {\n");
  print(node);
  printf("}\n");
  unvisit(node);
}

