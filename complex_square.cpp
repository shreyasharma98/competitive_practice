#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int start_val;
    for(int i =1;i<=n;i++)
    {
        for(j=start_val;j<=start_val+n;j++)
        {
            cout<<j<<"\t";
        }
        cout<<"\n";
        if(i==(n+1)/2)
        {
            if(n%2 == 0){start_val=n*(n-1)+1;}
            else{start_val=n*(n-2)+1;}
        }

        else if(i>(n+1)/2){start_val-=2*n;}
        else{start_val+=2*n;}
    }

}



