/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-27 16:12
 * Filename      : 128_delete3.cpp
 * Description   : 
 * *******************************************************/


#include <iostream>
#include <string>

int main()
{
  using namespace std;
  string s = "i put that work on you everyday";
  string s1;
  int a[26] = {0};
  for (auto i : s){
    if (i != ' '){
      a[i-'a']++;
    }
    if (a[i-'a'] < 2 || i == ' ')
      s1 = s1 + i;
  }
  cout << "the string is:" << s << endl;
  cout << "now string is:";
  for (auto i : s1) {
    cout << i;
  }
  cout << endl;
}
