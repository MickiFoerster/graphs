#pragma once

#include <memory>
#include <vector>

class Node {
  const void *data;
  bool visited;
  std::vector<Node *> neighbours;

public:
  Node(const void *data);
  void Connect(Node *node);
};
