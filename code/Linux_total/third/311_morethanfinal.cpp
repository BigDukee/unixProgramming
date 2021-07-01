/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-28 01:12
 * Filename      : 311_morethanfinal.cpp
 * Description   : 
 * *******************************************************/


#include <iostream>
#include <algorithm>

int main()
{
  using namespace std;
  int a[] = {1, 3, 5, 0, 1, 2, 3, 99, 0};
  int len = sizeof(a)/4;
  sort(a, a+len);
  for (auto i:a){
    cout <<i << " ";
  }
  cout << endl;
}
