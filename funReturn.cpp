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
	int n1,n2;
    cout<<"\nEnter two num";
  		
  		cin>>n1>>n2;
  		cout<<"miminum num is :"<<minimum(n1,n2);
  
    cout<<"\nExit in main";
}
