
#include<iostream>
using namespace std;
class Human
{
	protected:
		
     	 string name,gender;
     	 int age;
      
 
};

class Student:virtual public Human
{
	protected :
		string degree;
		
//	public:
//		void todo()
//		{
//			cout<<"from Student : Degree.......";
//		}
};
class Job:virtual public Student
{
	protected :
		double salary;
		
//	public:
//		void working()
//		{
//			cout<<"from Job : working for salary.......";
//		}
};

class Details:virtual public Human, virtual public Student,virtual public Job
{
	public:
    void set_Person(string name,string gender,int age, string degree,double salary)
      {
          this->age=age;
          this->gender=gender;
          this->name=name;
          this->degree=degree;
          this->salary=salary;
      }
      	void todo(){
			
				cout<<"\nName : "<<name<<"\nGender :"<<gender<< "\nAge : "<<age<<"\nDegree : "<<degree<<"\nSalary is : "<<salary;
				
		}
};

int main()
{
	Details d;
	d.set_Person("abc","Male",25,"Engineering",85000);
	d.todo();

}






