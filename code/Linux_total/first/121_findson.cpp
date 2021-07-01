/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-27 13:36
 * Filename      : 121_findson.cpp
 * Description   : 
 * *******************************************************/


#include <iostream>
#include <string>

int main()
{
  using namespace std;
  string s = "loving for the moment, love is all we ask";
  string x = "for";
  cout << "the string is:" << s <<endl;
  int a = s.find(x);
  if (a>0){
    cout << x << " is start from " << a+1 << "th\n";
  } else 
    cout << "not exis" << endl;
}
