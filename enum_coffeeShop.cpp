#include<iostream>
using namespace std;

enum coffee{small=1,medium=2,large=3,tall=4};

int main(){
	float base_cost;
	int ch;
	
	
	cout<<"enter base cost :"
	cin>>base_cost;
	
	cout<<"enter size needed \nsmall=1 \nmedium=2 \nlarge=3 \ntall=4";
	cin>>ch;
	
	cout<<"\nYou Selected : "<<ch;
	
	coffee multiply_by;
	switch(ch){
		 
         case 1:
         	
         multiply_by=small;   
            break;
        }
        
	cout<<"\nBill amount :"<<
	
	
	return 0;
}
