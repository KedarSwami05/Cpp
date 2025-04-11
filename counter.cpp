#include <iostream>
using namespace std;

int main(){
	
	int start,end;
	
	cout<<"start num :";
	cin>>start;
	cout<<"end num :";
	cin>>end;
	
	if(start<end)
	for(int i=start;i<=end;i++){
		cout<<i<<" ";
	}else
	for(int i=start;i>=end;i--){
		cout<<i<<" ";
	}
	
	return 0;
}
