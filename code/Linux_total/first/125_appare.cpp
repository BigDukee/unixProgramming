/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-27 14:38
 * Filename      : 125_appare.cpp
 * Description   : 
 * *******************************************************/


#include <iostream>
#include <vector>
#include <string>

int main()
{
  using namespace std;
  string s1 = "aabbcccccddffffee";
  string s2 = "acdfeb";
  cout << "s1:" << s1 << "\ns2:" << s2 <<endl;
  int a1[26] = {0};
  int a2[26] = {0};
  for (auto i : s1)
    a1[i-'a']++;
  for (auto i : s2)
    a2[i-'a']++;
  for (int i=0; i<26; i++){
    if (a1[i] > 1)
      a1[i] = 1;
    if (a2[i] > 1)
      a2[i] = 1;
  }
  int flag=1;
  for (int i=0; i<26; i++){
    if (a1[i] != a2[i])
      flag = 0;
  }
  if (flag == 0) { 
    cout << "FALSE" << endl;
  } else {
    cout << "TRUE" << endl;
  }
}
