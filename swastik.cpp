#include<iostream>
using namespace std;

int main()
{
    int n, i,j;
    cin>>n;
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==n/2){cout<<"*";}
            else if(j==n/2){cout<<"*";}
            else if(i<n/2 && j==0){cout<<"*";}
            else if(i>n/2 && j==n-1){cout<<"*";}
            else if(j<n/2 && i==n-1){cout<<"*";}
            else if(j>n/2 && i==0){cout<<"*";}
            else{cout<<" ";}

        }
        cout<<"\n";
    }
    return 0;
}
