#include <iostream>

using namespace std;


// Time complexity - O(2^n)
// Space complexity - O(n)
long long fib(int n) {
  if (n <= 2) {
    return 1;
  }

  return fib(n - 1) + fib(n - 2);
}

int main() {

  cout << fib(2) << endl;
  cout << fib(6) << endl;

  cout << fib(18) << endl;

  cout << fib(50) << endl;

  return 0;
}