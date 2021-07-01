/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-30 11:07
 * Filename      : 129_manacher.cpp
 * Description   : 
 * *******************************************************/


#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
  using namespace std;
  char a[] = "abccbbccba";
  vector<char> b;
 // vector<int> l;
  int l[22];
  for (auto i : a) {
    b.push_back('#');
    b.push_back(i);
  }
  int r = 0, m = 0, c=b.size()/2;
  cout << c;
  for (int i=1; i<b.size(); i++) {
    //over border?
    if (r > i) {
     l[i] = min(r-i, l[2*c -i]);
    } else {
      l[i] = 1;
    }
    while(b[i+l[i]] == b[i-l[i]]) {
      l[i]++;
    }
    if (l[i]+i > r) {
      r = l[i] + i;
      c = i;
      m = max(m, l[i]);
    }
  }
}
