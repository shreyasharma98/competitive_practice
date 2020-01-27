#include<iostream>
using namespace std;
int second_largest(int Arr[],int num)
{
    int i,large;
    int f_large = Arr[0];
    int s_large = Arr[1];
    if(Arr[1] > Arr[0]  ){f_large = Arr[1];s_large = Arr[0];}
    for(i=0;i<num;i++)
    {
        if(Arr[i] > f_large){s_large = f_large;f_large = Arr[i];}
    }

    return s_large;

}

int main()
{
    int A[] = {3,34,8,23,67,2,5};
    int n = sizeof(A)/sizeof(A[0]);
    cout<<endl<<second_largest(A,n);
    return 0;
}
