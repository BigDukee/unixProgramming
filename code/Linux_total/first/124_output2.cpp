/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-27 14:30
 * Filename      : 124_output2.cpp
 * Description   : 
 * *******************************************************/


#include <iostream>
#include <string>
#include <vector>

int main()
{
  using namespace std;
  string s = "123-123+13+546-123";
  cout << "the string is:" << s << endl;
  vector<int> a;
  for (auto i : s){
    if (i>'0' && i<'9')
      a.push_back(i-'0');
  }
  cout << "now array is:";
  for (auto i : a)
    cout << i;
  cout << endl;
}
