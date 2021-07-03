/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-27 12:19
 * Filename      : 119_sort.cpp
 * Description   : 
 * *******************************************************/


#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
  int a[] = {100,3,2,1,6,8,12,98,7,9,19,25};
  cout << "original array is:";
  for (auto i : a)
    cout << i << " ";
  cout << endl;
  vector<int> a1, a2;
  int j=0, k=0;
  for (int i=0; i<end(a)-begin(a); i++){
    if (a[i]%2 == 0){
      a2.push_back(a[i]);
      j++;
    } else {
      a1.push_back(a[i]);
      k++;
    }
  }
  sort(a1.begin(), a1.end());
  sort(a2.begin(), a2.end());
  cout << "odd array is:";
  for (auto i : a1)
    cout << i << " ";
  cout << endl;
  cout << "even array is:";
  for (auto i : a2)
    cout << i << " ";
  cout << endl;
}
