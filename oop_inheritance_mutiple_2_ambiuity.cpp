#include<iostream>
using namespace std;
class A
{
  public:
  	void my()
  	{
  		cout<<"\nHi from A";
	  }
};
class B
{
  public:
  	void my()
  	{
  		cout<<"\nB Says hi";
	  }
};

class X:public A,public B
{
	public:
	void my_X()
  	{
  		cout<<"\nX Hello";
	  }
	  //call to my() is ambiguous:not able to decide whos my()
	  //sol: create method:my() and witin decide whos methos one needs to call
	  //A::my() or B::my()
	  void my()
	  {
	  	B::my();
	  }
	
};

int main()
{
X objx;
objx.my();
}
