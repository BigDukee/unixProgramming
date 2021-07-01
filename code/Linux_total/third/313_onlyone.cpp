/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-28 01:33
 * Filename      : 313_onlyone.cpp
 * Description   : 
 * *******************************************************/

#include <iostream>

int main()
{
  using namespace std;
  int a[] = {1,1,1,1,9,2,9,2,9,0,2,3};
  int b[10] = {0};
  for (auto i : a){
    b[i]++;
  }
  for (int i=0; i<10; i++){
    if (b[i]==1)
      cout << i << " ";
  }
  cout << endl;
}
