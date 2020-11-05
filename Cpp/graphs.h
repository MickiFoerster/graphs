#pragma once

#include <iostream>
#include <memory>
#include <vector>

class Node {
  std::string data;
  bool visited;
  std::vector<std::shared_ptr<Node>> neighbours;
  Node(const std::string &data);

public:
  ~Node();
  void Connect(std::shared_ptr<Node> node);
  friend std::shared_ptr<Node> newNode(const std::string &data);
  friend std::ostream &operator<<(std::ostream &os, std::shared_ptr<Node> node);
};

std::shared_ptr<Node> newNode(const std::string &data);
void dot_dump(std::ostream &os, const std::shared_ptr<Node> &node);
