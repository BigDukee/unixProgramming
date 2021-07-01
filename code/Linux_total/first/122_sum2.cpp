/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-27 13:52
 * Filename      : 122_sum2.cpp
 * Description   : 
 * *******************************************************/


#include <iostream>
#include <vector>

int main()
{
  using namespace std;
  string s = "10086";
  cout << "the string is:" << s << endl;
  vector<int> a;
  for (auto i : s){
    a.push_back(i-'0');  
  }
  int sum=0;
  for (auto i : a){
    sum += i;
  }
  cout << "the numbers of string sum is:" << sum << endl;
}
