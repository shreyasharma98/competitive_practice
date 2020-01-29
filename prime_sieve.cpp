#include<iostream>
using namespace std;
#define ll long long
void prime_s(int *p)
{
    for(int i=3;i<1000000;i+=2)
    {
        p[i] = 1;
    }
    for(ll i=3;i<1000000;i+=2){
        if(p[i] == 1)
    {
        for(ll j=i*i ;i<1000000;j+=i)
        {
            p[j] =0;
        }
    }
    }
    p[0] = p[1] = 0;
    p[2] = 1;
}

int main() {
    int t;
    cin>>t;
    int p[1000000] = {0};
    prime_s(p);

	int csum[1000000] = {0};
	for(int i =1;i<=1000000;i++)
	{
		csum[i] = csum[i-1] + p[i];
	}
    while(t--)
    {
        int n,m ;
        cin>>n>>m;
		cout<<csum[m] - csum[n-1]<<endl;
    }
	return 0;
}
