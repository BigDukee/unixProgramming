/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-27 20:57
 * Filename      : 306_days.cpp
 * Description   : 
 * *******************************************************/

#include <iostream>
#include <string>
#include <vector>

int main()
{
  using namespace std;
  vector<int> d;
  int m[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  d.push_back(2021);
  d.push_back(6);
  d.push_back(27);
  cout << "the day is:";
  for (auto i : d)
    cout << i << " ";
  cout << endl;
  int flag=0, days=0;
  if (((d[0]%4==0)&&(d[0]%100!=0)) || d[0]%400==0)
    flag=1;
  for (int i=0; i<d[1]-1; i++){
    days += m[i];
  }
  days = days + d[2] + flag;
  cout << "it's the " << days << "th day in this year" << endl;
}
