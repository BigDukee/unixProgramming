/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-27 15:57
 * Filename      : 127_double.cpp
 * Description   : 
 * *******************************************************/


#include <iostream>
#include <string>

int main()
{
  using namespace std;
  string s = "sweet like a chic-a-cherry cola";
  int a[26] = {0};
  char key = '1';
  for (auto i : s){
    if (i != ' '){
      a[i-'a']++;
      if (a[i-'a'] > 1) {
        key = i;
        break;
      }
    }
  }
  cout << "the string is: " << s << endl;
  cout << "the first double word is: " << key << endl;
}
