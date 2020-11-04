#pragma once

#include <iostream>
#include <memory>
#include <vector>

class Data;

class Node {
  std::shared_ptr<Data> data;
  bool visited;
  std::vector<std::shared_ptr<Node>> neighbours;
  Node(std::shared_ptr<Data> _data);

public:
  ~Node();
  void Connect(std::shared_ptr<Node> node);
  void Print(std::ostream &os);
  friend std::shared_ptr<Node> newNode(std::shared_ptr<Data> _data);
  friend std::ostream &operator<<(std::ostream &os, std::shared_ptr<Node> node);
};

std::shared_ptr<Node> newNode(std::shared_ptr<Data> _data);
