#pragma once
#include <stdbool.h>

typedef struct node_s node_t;
typedef struct neighbour_s neighbour_t;

struct neighbour_s {
  node_t *neighbour;
  neighbour_t *next;
};

struct node_s {
  void *data;
  bool visited;
  neighbour_t *neighbours;
};

node_t *newNode(void *_data);
bool connectNodes(node_t *node, node_t *neighbour);
void dot_dump(node_t *node);
