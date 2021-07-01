/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-27 22:21
 * Filename      : 309_sum.cpp
 * Description   : 
 * *******************************************************/

#include <iostream>

int main()
{
  using namespace std;
  int a[] = {1, -2, 6, 4, -7, 3, 2, 5, -8, 5, 2};
  int total=0, max=0;
  for (auto i : a){
    total += i;
  }
  for (auto i : a){
    if (max>0)
      max += i;
    else
      max = i;
    if (max > total){
      total = max;
    }
  }
  cout << total << endl;
}
