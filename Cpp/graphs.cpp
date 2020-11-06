#include "graphs.h"

Node::Node(const void *data) : data{data}, visited{false} {}

Node::~Node() = default;

void Node::Connect(std::shared_ptr<Node> node) { neighbours.push_back(node); }

std::shared_ptr<Node> newNode(const void *data) {
  return std::shared_ptr<Node>(new Node{data});
}

void dot_dump(std::ostream &os, const std::shared_ptr<Node> &node) {
  os << "digraph {\n" << node << "}\n";
}

std::ostream &
operator<<(std::ostream &os, std::shared_ptr<Node> node) {
  if (node->visited) {
    return os;
  }

  node->visited = true;
  os << *(const char *)node->data << "\n";
  for (auto &n : node->neighbours) {
    os << *(const char *)node->data << " -- " << *(const char *)n->data << "\n";
    os << n;
  }
  return os;
}
