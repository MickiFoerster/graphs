#include "graphs.h"
#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

node_t *newNode(void *_data) {
  node_t *node = (node_t *)malloc(sizeof(node_t));
  if (node) {
    node->data = _data;
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
