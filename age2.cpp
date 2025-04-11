#include <iostream>
using namespace std;

int main(){
	int age;
	cout<<"\nEnter age ";
	cin>>age;
	
	if(age<=57)
	cout<<"he/she is adult";

	else if(age<=17)
		cout<<"he/she is teen";
	else
		cout<<"he/she is resting at home";
		
	return 0;
}
