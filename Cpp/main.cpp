#include "graphs.h"

int main() {
  auto A = newNode("A");
  auto B = newNode("B");
  auto C = newNode("C");
  auto D = newNode("D");
  auto E = newNode("E");
  auto F = newNode("F");
  A->Connect(B);
  A->Connect(C);
  C->Connect(D);
  D->Connect(E);
  D->Connect(F);
  F->Connect(A);

  dot_dump(std::cout, A);
  return 0;
}
