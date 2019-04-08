#include <iostream>
#include <math.h>
#include <vector>

using namespace std;
unsigned long long power(unsigned long long x, unsigned long long y, unsigned long long p)
{
  unsigned long long res = 1;
  x = x % p;

  while(y > 0)
  {
    if (y & 1) res = (res * x) % p;

    y = y >> 1;
    x = (x * x) % p;
  }
  return res;
}

bool millerTest(unsigned long long d, unsigned long long n)
{
  unsigned long long a = 2 + rand() % (n - 4);

  unsigned long long x = power(a, d, n);

  if(x == 1 || x == n-1) return true;

  while(d != n - 1)
  {
    x = (x * x) % n;
    d *= 2;

    if(x == 1) return false;
    if(x == n-1) return true;
  }
  return false;
}

bool miller_isprime(unsigned long long n,int k)
{
  if(n <= 1 || n == 4) return false;
  if(n <= 3) return true;

  int d = n - 1;
  while(d % 2 == 0) d /= 2;

  for(int i=0;i<k;i++)
  {
    if(!millerTest(d,n)) return false;
  }
  return true;
}
bool isprime(unsigned long long n)
{
  if(n % 2 == 0) return false;
  if(n == 2 || n == 3) return true;

  // test each odd number from 3 to sqrt(n)
  for(unsigned long long i = 3;i<=sqrt(n);i=i+2)
  {
    if(n % i == 0) return false;
  }
  return true;
}

void generate(unsigned long long cur,int digit,int sum,int& d,int& n, vector<unsigned long long>& ans,int& count)
{
  // last digit
  unsigned long long temp = cur;
  // last digit
  if(count >= n) return;
  if(digit == d)
  {
    // last digit is 3
    cur = cur * 10 + 3;
    sum += 3;
    if(sum % 3 !=0 && isprime(cur))
    {
      if(miller_isprime(cur,4)) cout<<"miller ok"<<endl;
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
    if(cur % 7 !=0 && sum % 3 !=0 && isprime(cur))
    {
      if(miller_isprime(cur,4)) cout<<"miller ok"<<endl;
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
    generate(cur*10+7,digit+1,sum+7,d,n,ans,count);
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
  int digit = 1,sum = 0,count = 0;
  unsigned long long cur = 0;
  vector<unsigned long long> ans;
  generate(cur,digit,sum,d,n,ans,count);
  cout << "the n number is " << count << endl;

  return 0;
}
