#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

bool isprime(int n)
{
  if(n % 2 == 0) return false;

  // test each odd number from 3 to sqrt(n)
  for(int i = 2;i<=sqrt(n);i=i+2)
  {
    if(n % i == 0) return false;
  }
  return true;
}

void generate(int cur,int digit,int sum,int& d,int& n, vector<int>& ans,int& count)
{
  // last digit
  int temp = cur;
  // last digit
  if(count >= n) return;
  if(digit == d)
  {
    // last digit is 3
    cur = cur * 10 + 3;
    sum += 3;
    if(sum % 3 !=0 && isprime(cur))
    {
      count++;
      cout << cur << " is a prime" << endl;
      ans.push_back(cur);
    }
    sum -= 3;
    if(count >= n) return;
    // last digit is 7
    cur = temp;
    cur = cur * 10 + 7;
    sum += 7;
    if(sum % 7 !=0 && sum % 3 !=0 && isprime(cur))
    {
      count++;
      cout << cur << " is a prime" << endl;
      ans.push_back(cur);
    }
    sum -= 7;
    if(count >= n) return;
  }
  else
  {
    //
    // 2
    generate(cur*10+2,digit+1,sum+2,d,n,ans,count);
    // 3
    generate(cur*10+3,digit+1,sum+3,d,n,ans,count);
    // 5
    generate(cur*10+5,digit+1,sum+5,d,n,ans,count);
    // 7
    generate(cur*10+5,digit+1,sum+7,d,n,ans,count);
  }
  return;
}
int main(){
  // 0(sqrt(n))
  int d = 0,n = 0;
  cout << "input d: ";
  cin >> d;
  cout << "input n: ";
  cin >> n;
  //cout << "int max: " << INT_MAX << endl;
  int cur = 0,digit = 1,sum = 0,count = 0;
  vector<int> ans;
  generate(cur,digit,sum,d,n,ans,count);
  cout << "the n number is " << count << endl;

  return 0;
}
