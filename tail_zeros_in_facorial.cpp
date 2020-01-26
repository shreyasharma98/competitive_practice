#include<iostream>
#include<cmath>
using namespace std;
int compute(int x)
{
    int i=1,sum =0;
    while(x/(pow(5,i)) != 0)
    {
        sum+=x/(pow(5,i));
        i++;
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter a no. to  count trailing zeros in it's factorial :  ";
    cin>>n;
    cout<<endl<<"The number of zeros is : "<<compute(n);
    return 0;
}
