#include <iostream>
using namespace std;
int total_ways(int n,int m,int L,int Z)
{
  if(n==L && m==Z)
    return 1;
  if(n>L || m>Z)
    return 0;
  return total_ways(n,m+1,L,Z) + total_ways(n+1,m,L,Z);
}
int main()
{
   int N,M;
  cin>>N>>M;
  cout<<total_ways(0,0,N-1,M-1);

    return 0;
}
