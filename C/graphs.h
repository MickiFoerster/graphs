#pragma once

typedef struct tag_node {
  void *data;
  struct tag_Node **neighbours;
} node_t;

node_t *newNode(void *_data);
void connectNodes(node_t *node, node_t *neighbour) {}
