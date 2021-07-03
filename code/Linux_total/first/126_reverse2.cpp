/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-27 15:06
 * Filename      : 126_reverse2.cpp
 * Description   : 
 * *******************************************************/


#include <iostream>
#include <string>
#include <vector>


int main()
{
  using namespace std;
  string s = "from the west coast to the east";
  cout << "original string is: " << s <<endl;
  int m = 1;
  for (auto i : s){
    if (i == ' ')
      m++;
  }
  string s1[m];
  int n = 0;
  for (auto i : s) {
    if (i == ' '){
      n++;
    } else {
      s1[n] = s1[n]+i;
    }
  }
  cout << "now string is:";
  for (int i=m; i>=0; i--){
    cout << s1[i] << " ";
  }
  cout << endl;
}
