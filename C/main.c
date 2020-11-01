#include "graphs.h"

int main(void) {
  node_t *A = newNode("A");
  node_t *B = newNode("B");
  node_t *C = newNode("C");
  node_t *D = newNode("D");
  node_t *E = newNode("E");
  node_t *F = newNode("F");
  connectNodes(A, B);
  connectNodes(A, C);
  connectNodes(C, D);
  connectNodes(D, E);
  connectNodes(D, F);
  connectNodes(F, A);

  dot_dump(A);

  return 0;
}
