#include <iostream>
#include <climits>
#define L long long
using namespace std;

int main()
{
	L t;
	cin>>t;
	L *p = new L[t];
	L *a = new L[t];
	for(L i = 0;i<t;i++)
	{
		cin>>p[i];
	}
		for(L i = 0;i<t;i++)
	{
		cin>>a[i];
	}
	L mini = LLONG_MAX ;
    for(L i = 0;i<t;i++)
    {
        L res = a[i]/p[i];
		mini = min(mini,res);
    }
	cout<<mini<<endl;
	delete []p;
	delete []a;
	return 0;
	//Write code here
}
