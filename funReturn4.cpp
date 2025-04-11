#include<iostream>
using namespace std;


 int minimum(int no1,int no2)//3 with parameter with return*
 {
     if(no1<no2){
     	return no1;
	 }else{
	 	return no2;
	 }
	 
 }
int main()
{
	int n1,n2,n3,n4;
    cout<<"\nEnter 4 num";
  		
  		cin>>n1>>n2>>n3>>n4;
  		cout<<"miminum num is :"<< minimum(minimum(n1,n2), minimum(n3,n4));
  
    cout<<"\nExit in main";
}
