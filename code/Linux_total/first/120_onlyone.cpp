/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-27 13:10
 * Filename      : 120_onlyone.cpp
 * Description   : 
 * *******************************************************/


#include <iostream>
#include <string>

int main()
{
  using namespace std;
  string s = "zaababababababababacwwww";
  cout << "the string is:" << s <<endl;
  int a[26] = {0};
  for (auto i : s){
    a[i-'a']++;
  }
  char x; 
  cout << "only one word is:";
  for (int i=0; i<26; i++){
    if (a[i] == 1){
      x = i+'a';
      cout << x << " ";
    }
  }
  cout << endl;
}
