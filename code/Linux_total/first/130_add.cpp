/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-27 17:42
 * Filename      : 130_add.cpp
 * Description   : 
 * *******************************************************/


#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int main()
{
  using namespace std;
  string s1 = "111";
  string s2 = "1011";
  cout << "s1:" << s1 << endl << "s2:" << s2 << endl;
  vector<int> a1, a2, a3;
  int m = 0;
  for (auto i : s1){
    a1.push_back(i-'0');
  }
  for (auto i : s2){
    a2.push_back(i-'0');
  }
  if (a1.size() < a2.size()){
    a1.swap(a2);
  }
  reverse(a1.begin(), a1.end());
  reverse(a2.begin(), a2.end());
  if (a1.size() != a2.size()){
    m = a1.size() - a2.size();
    for (int i=0; i<m; i++)
      a2.push_back(0);
  }

  int flag = 0;
  m = a1.size();
  for (int i=0; i<m+1; i++){
    a3.push_back(a1[i] + a2[i] + flag);
    if (a3[i] == 2) {
      a3[i] = 0;
      flag = 1;
    } else if (a3[i] == 3){
      a3[i] = 1;
      flag = 1;
    } else
      flag = 0;
  }

  reverse(a3.begin(), a3.end());

  cout << "sum:";
  for (auto i : a3) {
    cout << i;
  }
  cout << endl;
}
