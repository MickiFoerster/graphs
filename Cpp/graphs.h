#pragma once

#include <memory>
#include <vector>

class Data;

class Node {
  std::unique_ptr<Data> data;
  bool visited;
  std::vector<Node *> neighbours;
  Node(std::unique_ptr<Data> _data);

public:
  void Connect(Node *node);
  friend std::unique_ptr<Node> newNode(std::unique_ptr<Data> _data);
};
