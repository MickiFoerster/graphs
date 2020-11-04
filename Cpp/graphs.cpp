#include "graphs.h"
#include <memory>

Node::Node(std::unique_ptr<Data> _data)
    : data{std::move(_data)}, visited{false} {}
void Node::Connect(Node *node) { neighbours.push_back(node); }

std::unique_ptr<Node> newNode(std::unique_ptr<Data> _data) {
  return std::unique_ptr<Node>(new Node{std::move(_data)});
}
