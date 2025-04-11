
#include<iostream>
using namespace std;
class Human
{
 	public:
		void live()
		{
			cout<<"from Human : breathing........";
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
class Job:public Student
{
	public:
		void working()
		{
			cout<<"from Job : working for money.......";
		}
};


int main()
{
Job j;
j.live();
j.study();
j.working();
}






