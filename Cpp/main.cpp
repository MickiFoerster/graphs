#include "graphs.h"

int main() {
  Node *A = new Node("A");
  Node *B = new Node("B");
  Node *C = new Node("C");
  Node *D = new Node("D");
  Node *E = new Node("E");
  Node *F = new Node("F");
  A->Connect(B);
  A->Connect(C);
  C->Connect(D);
  D->Connect(E);
  D->Connect(F);
  F->Connect(A);
  return 0;
}
