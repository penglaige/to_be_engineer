#include <iostream>
using namespace std;

int main()
{
  int n, i;
  bool isPrime = true;

  cout << "Enter a positive integer: ";
  cin >> n;

  for(i = 2; i <= n / 2; ++i)
  {
      if(n % i == 0)
      {
          isPrime = false;
          break;
      }
  }
  if (isPrime)
      cout << "This is a prime number";
  else
      cout << "This is not a prime number";

  return 0;
}

////
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

bool isprime(unsigned long long n)
{
  //cout << n <<endl;
  if(n % 2 == 0) return false;
  if(n == 2 || n == 3) return true;

  // test each odd number from 3 to sqrt(n)
  for(unsigned long long i = 3; i<=sqrt(n);i=i+2)
  {
    if(n % i == 0) return false;
  }
  return true;
}

void generate(unsigned long long cur,int digit,int sum,int& d,int& n,int& count)
{
  unsigned long long temp = cur;
  // if done
  if(count >= n) return;
  // last digit
  if(digit == d)
  {
    // last digit is 3
    cur = cur * 10 + 3;
    sum += 3;
    if(sum % 3 !=0 && isprime(cur))
    {
      count++;
      cout << cur << endl;
    }
    sum -= 3;
    if(count >= n) return;

    //last digit is 7
    cur = temp;
    cur = cur * 10 + 7;
    sum += 7;
    if(cur % 7 != 0 && sum % 3 != 0 && isprime(cur))
    {
      count++;
      cout << cur <<endl;
    }
    sum -= 7;
    if(count >= n) return;
  }
  else
  {
    // 2
    generate(cur * 10 + 2,digit + 1,sum + 2,d,n,count);
    // 3
    generate(cur * 10 + 3,digit + 1,sum + 3,d,n,count);
    // 5
    generate(cur * 10 + 5,digit + 1,sum + 5,d,n,count);
    // 7
    generate(cur * 10 + 7,digit + 1,sum + 7,d,n,count);
  }
  return;
}

int main(int argc, char *argv[]) {
  // start from 1 to ignore script name; argv[0] will be a name of processing file.
  //for (int i = 1; i < argc; i++) {
  //  cout << "argv[" << i << "]:" << argv[i] << "\n";
  //}
  int d = stoi(argv[1]);
  int n = stoi(argv[2]);
  // cout << d << " "<<n<<endl;
  int digit = 1,sum = 0,count = 0;
  // digit is the current digit number, sum is the sum the numbers in all digits,count represent the current satisfied primes.
  unsigned long long cur = 0;
  // cur is the current target number
  // when d == 1
  if(d == 1)
  {
    if(!n) return 0;
    cout << 2 <<endl;
    count++;
    if(count >= n) return 0;
    cout << 3 <<endl;
    count++;
    if(count >= n) return 0;
    cout << 5 <<endl;
    count++;
    if(count >= n) return 0;
    cout << 7 <<endl;
    count++;
    if(count >= n) return 0;
  }
  else{
    generate(cur,digit,sum,d,n,count);
  }


  return 0;
}
