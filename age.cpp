#include <iostream>
using namespace std;

int main(){
	int age;
	cout<<"\nEnter age ";
	cin>>age;
	if(age<=17)
		cout<<"he/she is teen";
	else if(age<=57)
		cout<<"he/she is adult";
	else
		cout<<"he/she is resting at home";
}
