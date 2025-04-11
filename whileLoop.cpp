#include <iostream>
using namespace std;


int main()
{
    int number,digit,sum=0,product=1;//init
    cout<<"Enter number:";
    cin>>number;
    while(number>0)//end
        {
            digit=number%10;
            number=number/10;
            if(digit%2!=0){
			
            sum=sum+digit;
         	}else
         	{
         		product=product*digit;
			 }
        	
		
            cout<<"\nno:"<<number<<"  digit:"<<digit<<" sum :"<<sum<<" product :"<<product<<endl;
        }
   
return 0;
             
}
