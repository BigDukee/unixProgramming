/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-07-01 00:28
 * Filename      : 210_quick.cpp
 * Description   : 
 * *******************************************************/


#include <iostream>


int main()
{
  using namespace std;
  int a[] = {3,1,5,1,5,7,2,78,2,8,1,8,5,3,7,4};
  int min;
  for (int i=0; i<sizeof(a)/4; i++) {
    min = i;
    for (int j=i; j<sizeof(a)/4; j++) {
      if (a[min] > a[j]) {
        min = j;
      }
    }
    swap(a[i], a[min]);
  }
  for (auto i : a) {
    cout << i;
  }
}
