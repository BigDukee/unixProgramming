/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-27 22:17
 * Filename      : 307_crypto.cpp
 * Description   : 
 * *******************************************************/


#include <iostream>

int main()
{
  using namespace std;
  int a[] = {5, 6, 7, 8};
  for (int i=0; i<4; i++){
    a[i] += 5;
    a[i] %= 10;
  }
  a[0] = a[0] + a[3] - (a[3]=a[0]);
  a[1] = a[1] + a[2] - (a[2]=a[1]);
  for (auto i : a) {
    cout << i;
  }
  cout <<endl;
}
