#include <iostream>

using namespace std;

long long fib(int n) {
  if (n <= 2) {
    return 1;
  }

  return fib(n - 1) + fib(n - 2);
}

int main() {
  auto result = fib(50);

  return 0;
}