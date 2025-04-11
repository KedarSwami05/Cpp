#include<iostream>
using namespace std;
class Human
{
 	public:
		Human()
		{
			cout<<"\nfrom Human : breathing........";
		}
	
};
class Student:virtual public Human
{
	public:
		Student()
		{
			cout<<"\nfrom Student : doing.......";
		}
	
};
class Work:public virtual Human
{
	public:
		Work()
		{
			cout<<"\nfrom Work : working.......";
		}
	
};

class End:public Student,public Work
{
	public:
		End()
		{
			cout<<"\nfrom End: RIP.......";
		}
	
};

int main()
{
End e;

}
