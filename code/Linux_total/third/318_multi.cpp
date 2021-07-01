/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-28 10:52
 * Filename      : 318_multi.cpp
 * Description   : 
 * *******************************************************/


#include <iostream>


int main()
{
  using namespace std;
  for (int i=1; i<10; i++){
    for (int j=1; j<=i; j++){
      printf("%d*%d=%d ",j,i,i*j);
    }
    cout << endl;
  }
}
