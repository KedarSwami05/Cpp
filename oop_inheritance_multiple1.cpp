#include<iostream>
using namespace std;
class A
{
  public:
  	void my_A()
  	{
  		cout<<"\nHi from A";
	  }
};
class B
{
  public:
  	void my_B()
  	{
  		cout<<"\nB Says hi";
	  }
};
class C
{
  public:
  	void my_C()
  	{
  		cout<<"\nHello from C";
	  }
};
class X:public A,public B,public C
{
	public:
			void my_X()
  	{
  		cout<<"\nX Hello";
	  }
	
};

int main()
{
X objx;
objx.my_A();
objx.my_B();
objx.my_C();
objx.my_X();
}

