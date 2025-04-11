#include<iostream>
using namespace std;

enum coffee{small,medium,large,tall};

int main(){
	coffee size;
	size=small;
	int choise,n1;
	do{
		cout << "\nMenu:\n";
        cout << "1. small\n";
        cout << "2. medium\n";
        cout << "3. large\n";
        cout << "4. tall\n";
         cout << "0. exit\n";
         
         switch(choise)
         {
		 
         case 1:
         	cout << "Enter two numbers: ";
            cin >> n1 ;
            
            break;
        }
	}while(0);
	cout<<"Cost :"<<size+1;
	return 0;
}
