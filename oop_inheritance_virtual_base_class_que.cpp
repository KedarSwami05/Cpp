//create class human having name,age,gender
//inherited by 2 classes study and working
//both having same method called to_do():  if age <=25 would inherit to_do() of student
//                                            else would inherit to_do() of working
//study:todo():print need to study
//working:todo():print need to work
//call made only to class called person.todo()



#include<iostream>
using namespace std;
class Human
{
 	public:
		Human(string name, string age, string gender)
		{
			
			cout<<"\nfrom Human info ";
		}
	
};
class Student:virtual public Human
{
	public:
		todo()
		{
			cout<<"\nfrom Student : need to study";
		}
	
};
class Work:public virtual Human
{
	public:
		todo()
		{
			cout<<"\nfrom Work : need to work";
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
