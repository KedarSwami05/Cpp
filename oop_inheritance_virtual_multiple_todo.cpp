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
  protected:
      string name,gender;
      int age;
};

class Study:virtual public Human
{
  public:
      void todo()
      {
          cout<<"\nneed to study";
      }
};
class Working:virtual public Human
{
  public:
      void todo()
      {
          cout<<"\nneed to work";
      }
};

class Person:public Study,public Working
{
    public:
    void set_Person(string name,string gender,int age)
      {
          this->age=age;
          this->gender=gender;
          this->name=name;
      }
     
     	void todo(){
			if(age<=25){
				cout<<"\nName : "<<name<<"\nAge :"<<age;
				Study ::todo();
			}else{
			
			Working :: todo();
		}
		}
   
};

int main()
{
Person p;
p.set_Person("abc","Male",12);
p.todo();
p.set_Person("xyz","female",45);
p.todo();
p.set_Person("pqr","female",25);
p.todo();
}
