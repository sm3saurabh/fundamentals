#include <iostream>
#include <unordered_map>

using namespace std;

// Time complexity - O(n)
// Space complexity - O(n)
long long fib_helper(int n, unordered_map<int, long long> &memo) {
  if (n <= 2) {
    return 1;
  }

  if (memo.find(n) != memo.end()) {
    return memo[n];
  }

  memo[n] = fib_helper(n - 1, memo) + fib_helper(n - 2, memo);

  return memo[n];
}

long long fib(int n){
  unordered_map<int, long long> memo;
  return fib_helper(n, memo);
}

int main() {

  cout << fib(2) << endl;
  cout << fib(6) << endl;

  cout << fib(18) << endl;

  cout << fib(50) << endl;


  return 0;
}