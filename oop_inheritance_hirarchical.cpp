#include<iostream>
using namespace std;
class Human
{
 	public:
		void live()
		{
			cout<<"\nfrom Human : breathing........";
		}
};
class Student:public Human
{
	public:
		void study()
		{
			cout<<"from Student : doing.......";
		}
};
class Job:public Human
{
	public:
		void working()
		{
			cout<<"from Job : working for money.......";
		}
};


int main()
{
Student s;
s.live();
s.study();

Job j;
j.live();
j.working();

}
