#include "graphs.h"

Node::Node(std::shared_ptr<Data> _data)
    : data{std::move(_data)}, visited{false} {}

Node::~Node() = default;
void Node::Print(std::ostream &os) {
  os << data << "\n";
  for (auto &n : neighbours) {
    os << n << "\n";
  }
}
void Node::Connect(std::shared_ptr<Node> node) { neighbours.push_back(node); }

std::shared_ptr<Node> newNode(std::shared_ptr<Data> _data) {
  return std::shared_ptr<Node>(new Node{std::move(_data)});
}

std::ostream &operator<<(std::ostream &os, std::shared_ptr<Node> node) {
  os << node->data << "\n";
  return os;
}
