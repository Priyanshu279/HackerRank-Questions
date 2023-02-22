#include <bits/stdc++.h>
using namespace std;

int main(){
  long long  int sum1=0,sum2=0;
    int row,coloumn;
    int i,n,j;
    cin>>n;
   int arr[n][n];
  long long  int diff;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
      for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           if(i==j)
           {
               sum1=sum1+arr[i][j];
           }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           if(i==n-j-1)
           {
               sum2=sum2+arr[i][j];
           }
        }


    }    
    diff=abs(sum1-sum2);
    cout<<diff;
}
