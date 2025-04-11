//override:when child rewrites method it rejects inheritance
//this is called override done to adapt to new needs/situations
#include<iostream>
using namespace std;
class Parent
{
 	public:
		void live()
		{
			cout<<"\nParent:simple living high thinking";
		}
	void speak()
		{
			cout<<"\nParent: Native Language";
		}
};
class Child: public Parent
{
	public:
		void live()
		{
			cout<<"\nChild:simple is out of date";
		}
	
};


int main()
{
Parent p;
cout<<"\nparent\n";
p.live();
p.speak();
Child c;
cout<<"\nchild\n";
c.live();
c.speak();

}
