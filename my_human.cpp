#include <iostream>

using namespace std;
//global
class Human
{
  private:
	string name,gender;
	int age;
  public:
  void set_details(string name,string gender,int age)
	{
		this->name=name;
		this->gender=gender;
		this->age=age;
      }	
  void vote()
	{
         if(age<18)
			cout<<endl<<name<<" with "<<age<<" you can not vote";
		else
			cout<<endl<<name<<" with "<<age<<" you should vote";
     }
  void intro()
	{
		cout<<"\nHi i am "<<name<<", "<<age<<" years old , a "<<gender;
	}
};
int main()
{
	Human h;
	string name,gender;
	int age;
	cout<<"Enter name,gender and age\n";
	cin>>name>>gender>>age;
	h.set_details(name,gender,age);
	h.intro();
	h.vote();
	return 0;
}
my_human.cpp

