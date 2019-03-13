#include <iostream>
using namespace std;

int main()
{
  int a = 3;
  int c = 4;

  int ans = a * c % 10;
  cout << (int)(a*c/10)<<endl;
  cout << ans <<endl;
  return 0;
}
