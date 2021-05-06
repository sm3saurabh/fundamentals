#include <iostream>
#include <vector>

using namespace std;

/*
  When algorithm is in the form of "do this, then , when you are all done, do that"
  Then you add the runtimes
  When your algorithm is in the form "do this each time you do that" then you multiply the runtimes

  In this case
  addRuntime will have a runtime of O(a + b) where a and b are size of arrayA and arrayB respectively
  multiplyRuntime will have a runtime of O(a * b) where a and b are size of arrayA and arrayB respectively  
*/

void addRuntime(vector<int> arrayA, vector<int> arrayB) {
  for (int &a : arrayA) {
    cout << a << endl;
  }

  for (int &b : arrayB) {
    cout << b << endl;
  }
}

void multiplyRuntime(vector<int> arrayA, vector<int> arrayB) {
  for (int &a : arrayA) {
    for (int &b : arrayB) {
      cout << a << "," << b;
    }
  }
}
