#include <iostream>
#include <vector>

using namespace std;
void change(int array[]);
void change_vector(vector<int> v);
void change2(vector<int> &v);
void change3(int n)
{
  // 形参
  n = n * 2;
  return;
}
void change4(int *n)
{
  //实参,n是指针变量
  *n = *n * 2;
  return;
}
void change5(int &n)
{
  //实参，n就是变量
  n = n * 2;
  return;
}
void change6(int* n)
{
  //实参，n是指针变量
  *n = *n * 2;
  return;
}

int main()
{
  int n = 1;
  change3(n);
  cout << "after change3: "<< n << "-"<< &n << endl;
  change4(&n);
  cout << "after change4: "<< n << "-"<< &n << endl;
  change5(n);
  cout << "after change5: "<< n << "-"<< &n << endl;
  change6(&n);
  cout << "after change6: "<< n << "-"<< &n << endl;
  //int a[10];
  vector<int> v (10,0);
  cout<< "before change:" << endl;
  for(int i=0;i<10;i++)
  {
    v[i] = i+1;
    //a[i] = i;
    //cout << a[i] << endl;
    cout << v[i] << endl;
  }

  //change(a);
  change_vector(v);
  cout << "after change:" <<endl;
  for(int i=0;i<10;i++)
  {
    cout<< v[i] <<endl;
  }
  cout << "after change2: " << endl;
  change2(v);
  for(int i=0;i<10;i++)
  {
    cout<< v[i] <<endl;
  }
  return 0;
}

void change(int array[])
{
  // array is passed as pointer,so function will change the value
  for(int i=0;i<10;i++)
  {
    array[i] = 10-i;
  }
  return;
}

void change_vector(vector<int> v)
{
  // when pass vector, 传递的是形参。
  for(int i=0;i<10;i++)
  {
    v[i] = i*2;
  }
  return;
}

void change2(vector<int> &v)
{
  // 加上&之后传递的就是实参。
  for(int i=0;i<10;i++)
  {
    v[i] = i*2;
  }
  return;
}
