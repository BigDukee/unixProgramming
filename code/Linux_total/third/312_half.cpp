/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-28 01:27
 * Filename      : 312_half.cpp
 * Description   : 
 * *******************************************************/


#include <iostream>
#include <algorithm>

int main()
{
  using namespace std;
  int a[] = {1,1,2,2,2,2,2,1,1};
  sort(a, a+sizeof(a)/4);
  cout << a[sizeof(a)/8] << endl;
}
