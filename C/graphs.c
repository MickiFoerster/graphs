#include "graphs.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

node_t *newNode(void *_data) {
  node_t *node = (node_t *)malloc(sizeof(node_t));
  if (node) {
    node->data = _data;
    node->neighbour = NULL;
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

  if (node->neighbour == NULL) {
    neighbour_t n = newNeighbour(neighbour);
    node->neighbour = n;
    ret
  }
  neighbours_t *runner = node;
}
