#include "graphs.h"

struct Data {
  std::string s;

public:
  Data(std::string _s) : s{_s} {}
};

std::ostream &operator<<(std::ostream &os, std::shared_ptr<Data> data) {
  os << (data.get())->s << "\n";
  return os;
}

int main() {
  auto A = newNode(std::make_shared<Data>("A"));
  auto B = newNode(std::make_shared<Data>("B"));
  auto C = newNode(std::make_shared<Data>("C"));
  auto D = newNode(std::make_shared<Data>("D"));
  auto E = newNode(std::make_shared<Data>("E"));
  auto F = newNode(std::make_shared<Data>("F"));
  A->Connect(B);
  A->Connect(C);
  C->Connect(D);
  D->Connect(E);
  D->Connect(F);
  F->Connect(A);

  A->Print(std::cerr);
  return 0;
}
