#include<iostream>
using namespace std;
//overload:polymorphism
//one identifier used for n functions
//idetification of who is called on basis of
//1.data type of parameters
//2.number of parameter
//3.both
//used to add more functionality w.r.t
//data type or number of parameter
void addition(int no1,int no2)
{
     cout<<endl<<"2 int "<<no1<<" + "<<no2<<" = "<<(no1+no2);
}
void addition(int no1,int no2,int no3)
{
     cout<<endl<<"3 int "<<no1<<" + "<<no2<<" + "<<no3<<" = "<<(no1+no2+no3);
}
void addition(float no1,float no2)
{
     cout<<endl<<"2 float "<<no1<<" + "<<no2<<" = "<<(no1+no2);
}
int main()
{
    addition(10,8);
    addition(8.0f,2.1f);
    addition(10,22,33);
    return 0;

}
