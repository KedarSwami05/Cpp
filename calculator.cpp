#include<iostream>
using namespace std;

class Calculator{
    public:

    int addition(int a, int b){
        int result=a+b;
        return result;
    }

    int substraction(int a, int b){
        int result=a-b;
        return result;
    }

    int multiplication(int a, int b){
        int result=a*b;
        return result;
    }

    int division(int a, int b){
        int result=a/b;
        return result;
    }

    


};

int main()
{
    int option;
    int result;
    Calculator calc;
    int a=20;
    int b=12;
    
    
    while(1){
        cout<<"choose option"<<endl;
    cout<<"Choose 1 for addition"<<endl;
    cout<<"Choose 2 for substration"<<endl;
    cout<<"Choose 3 for multiply"<<endl;
    cout<<"Choose 4 for division"<<endl;
    cout<<"Exit"<<endl; 

    cin>>option;
    switch (option)
    {
    case 1 : result= calc.addition(a,b); break;
    case 2 : result= calc.substraction(a,b); break;
    case 3 : result= calc.multiplication(a,b); break;
    case 4 : result= calc.division(a,b); break;
    case 5:return 0; break;
    }
    cout<<"result ="<<result<<endl;
    
    }

    return 0;
}
