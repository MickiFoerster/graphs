#include "graphs.h"

Node::Node(const void *_data) : data{std::move(_data)}, visited{false} {}
void Node::Connect(Node *node) { neighbours.push_back(node); }
