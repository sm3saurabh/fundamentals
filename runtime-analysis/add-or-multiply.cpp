#include <iostream>
#include <vector>

using namespace std;

void addRuntime(vector<int> arrayA, vector<int> arrayB) {
  for (int &a : arrayA) {
    cout << a << endl;
  }

  for (int &b: arrayB) {
    cout << b << endl;
  }
}

void multiplyRuntime(vector<int> arrayA, vector<int> arrayB) {
  
}

