/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-28 08:08
 * Filename      : 314_matrix.cpp
 * Description   : 
 * *******************************************************/


#include <iostream>
#include <vector>
int main()
{
  using namespace std;
  int a1[2][3] = {{0,1,0}, {1,0,0}};
  int a2[3][2] = {{2,0}, {1,0}, {0,1}};
  int a11[3][2];
  int a[2][2];
  vector<int> x;
  for (int i=0; i<2; i++){
    for (int j=0; j<3; j++){
      a11[j][i] = a1[i][j];
    }
  }
  int temp=0;
  for (int i=0; i<2; i++){
    for (int j=0; j<3; j++){
      temp = temp + a11[j][i] * a2[j][i];
      cout << temp;
    }
  x.push_back(temp);
  temp = 0;
  }
  for (auto i : x) {
    cout << i;
  }
}
