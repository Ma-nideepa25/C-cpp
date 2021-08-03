#include <iostream>
#include<cmath>
using namespace std;

int main()
{
   int size,i,j;
  cin>>size;
  int a[size][size];
  for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      cin>>a[i][j];
    }
  }

  int round = ceil((double)size/2);

  for(i=0;i<round;i++)
  {
    for(j=i;j<=size-i-1;j++)
      cout<<a[i][j]<<" ";
    for(j=i+1;j<=size-i-1;j++)
      cout<<a[j][size-i-1]<<" ";
    for(j=size-i-2;j>=i;j--)
      cout<<a[size-i-1][j]<<" ";
    for(j=size-i-2;j>i;j--)
      cout<<a[j][i]<<" ";
  }

    return 0;
}
