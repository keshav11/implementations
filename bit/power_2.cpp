#include<cstdio>
#include<iostream>

using namespace std;
int nextpoweroftwo(unsigned int n)
{
  int count = 0;
 
  if (n && !(n&(n-1)))
    return n;
 
  while( n != 0)
  {
    n  >>= 1;
    count += 1;
  }
 
  return 1<<count;
}
 
int main()
{
   int n = 100;
  printf("%d", nextpoweroftwo(n));
 
  getchar();
  return 0;
}
