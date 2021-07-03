/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-27 11:48
 * Filename      : 118_sum.cpp
 * Description   : 
 * *******************************************************/


#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
  string s1 = "1239121470287508249257029147012442214";
  string s2 = "123454992735072159874247294695623";

  cout << "s1:" << s1 <<endl << "s2:" << s2 <<endl;

  int s1size = s1.size();
  int s2size = s2.size();
  if (s1size < s2size)
    s1.swap(s2);
  int a = s1.size() - s2.size();
  for (int i=a; i>0; i--){
    s2.insert(0, "0");
  }
  reverse(s1.begin(), s1.end());
  reverse(s2.begin(), s2.end());
  int flag=0, k=0;
  int sa[1000];
  int sb[1000];
  int temp[1000];
  for (int i=0; i<s1.size(); i++){
    k++;
    sa[i] = s1[i]-48;
    sb[i] = s2[i]-48;
    temp[i] = sa[i]+sb[i]+flag;
    flag = 0;
    if (temp[i]>9){
      temp[i] -= 10;
    }
    if (sa[i]+sb[i] > 9){
      flag=1;
    }
  }
  ostringstream oss;
  for (int i=0; i<k; i++){ 
    oss << temp[i];
  }
  string b = oss.str();
  reverse(b.begin(), b.end());
  cout <<b<< endl;
}
