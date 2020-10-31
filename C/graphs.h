#pragma once
#include <stdbool.h>

struct node_s {
  void *data;
  struct neigbours_s {
    struct node_s *neighbour;
    struct neigbours_s *next;
  } * neighbour;
};

typedef struct node_s node_t;
typedef struct neighbour_s neighbour_t;

node_t *newNode(void *_data);
bool connectNodes(node_t *node, node_t *neighbour);
