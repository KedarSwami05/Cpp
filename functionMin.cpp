#include<iostream>
using namespace std;


 void minimum(int no1,int no2)//3 with parameter with return*
 {
     if(no1<no2){
     	cout<<no1<<"is minimum";
	 }else{
	 	cout<<no2<<"is minimum";
	 }
	 
 }
int main()
{
	int n1,n2;
    cout<<"\nEnter two num";
  		
  		cin>>n1>>n2;
  		minimum(n1,n2);
  
    cout<<"\nExit in main";
}
