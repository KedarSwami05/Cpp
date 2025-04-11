#include<iostream>
using namespace std;
//pass by address: changes seen everywhere ,
//if function makes changes would be seen by everyone via pointer addressing that location
int swap(int *n1,int *n2)//reference is created with &sign
{
    cout<<"\n\tin start function: n1="<<*n1<<" n2="<<*n2;
    int temp=*n1;
    *n1=*n2;
    *n2=temp;
    cout<<"\n\tin end function: n1="<<*n1<<" n2="<<*n2;
}


int main()
{
    int n1=10,n2=20;
    cout<<"\nin start main: n1="<<n1<<" n2="<<n2;
    swap(&n1,&n2);//passing address of n1,n2
    cout<<"\nin end main: n1="<<n1<<" n2="<<n2;
    return 0;
}
