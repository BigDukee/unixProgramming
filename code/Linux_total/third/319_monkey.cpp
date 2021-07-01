/**********************************************************
 * Author        : yangziyi
 * Email         : 827584257@qq.com
 * Last modified : 2021-06-29 13:17
 * Filename      : 319_monkey.cpp
 * Description   : 
 * *******************************************************/


#include <iostream>


int main()
{
  using namespace std;
  int N = 5;
  int peach = 1;
  for (int i=2; i<N; i++){
    peach = (peach+1)*2;
  }
  printf("it's %d day, there're %d peaches\n", N,peach);
}
