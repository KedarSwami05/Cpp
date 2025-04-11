#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	for(int i=7;i>=1;i=i-2){
		cout<<setw(i+1)<<setfill('X')<<" "<<endl;
	}
	return 0;
}
