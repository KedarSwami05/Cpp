#include<iostream>
using namespace std;
class Human
{
 	public:
		Human()
		{
			cout<<"\nfrom Human : breathing........";
		}
		~Human()
		{
			cout<<"\nfrom Human : Bye Bye";
		}
};
class Student:public Human
{
	public:
		Student()
		{
			cout<<"\nfrom Student : doing.......";
		}
		~Student()
		{
			cout<<"\nfrom Student : End of Education";
		}
};


int main()
{
Student s;

}
