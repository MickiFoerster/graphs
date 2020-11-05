#include "graphs.h"

Node::Node(const std::string &data) : data{data}, visited{false} {}

Node::~Node() = default;

void Node::Connect(std::shared_ptr<Node> node) { neighbours.push_back(node); }

std::shared_ptr<Node> newNode(const std::string &data) {
  return std::shared_ptr<Node>(new Node{data});
}

std::ostream &operator<<(std::ostream &os, std::shared_ptr<Node> node) {
  if (node->visited) {
    return os;
  }

  node->visited = true;
  os << node->data << "\n";
  for (auto &n : node->neighbours) {
    os << node->data << " -- " << n->data << "\n";
    os << n;
  }
  return os;
}
