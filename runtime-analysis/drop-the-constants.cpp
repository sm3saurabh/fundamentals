#include <iostream>
#include <vector>

using namespace std;


/* 
* When calculating runtimes of a function, we generally drop the constants. In the two functions written below
* One has running time of n and the other is 2n 
* When input size becomes large enough, the constant 2 becomes very insignificant.
* Also, the common runtime representations big-oh, big-omega and big-theta all are used to signify the rate of increase
* in time consumption of an algorithm.
* 
* Therefore, runtime of both of these functions is O(n)
*/

void fun1(vector<int> array) {
  int min = 0, max = 0;

  for (int i = 0; i< array.size(); i++) {
    if (array[i] < min) min = array[i];
    if (array[i] > max) max = array[i];
  }
  cout << min << ":" << max << endl;
}

void fun2(vector<int> array) {
  int min = 0, max = 0;

  for (int i = 0; i< array.size(); i++) {
    if (array[i] < min) min = array[i];
  }

  for (int i = 0; i< array.size(); i++) {
    if (array[i] < max) max = array[i];
  }

  cout << min << ":" << max << endl;
}
