/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-27 14:26
 * Filename      : 123_output.cpp
 * Description   : 
 * *******************************************************/


#include <iostream>
#include <string>
#include <vector>


int main()
{
  using namespace std;
  string s = "7985327972470790147";
  cout << "the string is:" << s << endl;
  vector<int> a;
  for (auto i : s){
    a.push_back(i-'0');
  }
  cout << "the array is:";
  for (auto i : a){
    cout << i;
  }
  cout << endl;
}
