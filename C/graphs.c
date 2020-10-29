#include "graphs.h"
#include <stdio.h>
#include <stdlib.h>>

node_t *newNode(void *_data) {
  node_t *node = (node_t *)malloc(sizeof(node_t));
  if (node) {
    node->data = _data;
    node->neighbours = NULL;
  }
  return node;
}

void connectNodes(node_t *node, node_t *neighbour) {}
