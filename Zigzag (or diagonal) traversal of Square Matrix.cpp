#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m;
    cin>>n>>m;
    int arr[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   for(int i=0;i<n+m-1;i++)
   {
       for(int j=0;j<n;j++)
       {
           for(int k=0;k<m;k++)
           {
               if((j+k)==i)
               {
                   cout<<arr[k][j]<<" ";
               }
           }


       }
       cout<<endl;
   }



}
