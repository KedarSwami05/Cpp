#include <iostream>
//create class Maths that
//has add(),sub(),mul(),div()
//will print no1 (operation) no2 = answer
//has set() to set data
using namespace std;

class Maths
{
	private:
		int no1,no2;

	public:
		
		void set_data(int no1,int no2){
			this->no1=no1;
			this->no2=no2;
		}
		
		void add(){
			  cout<<no1<<" + "<<no2<<"= "<<(no1+no2)<<endl;
		}
		
		void sub(){
			cout<<no1<<" - "<<no2<<"= "<<(no1-no2)<<endl;
		}
		
		void mult(){
			cout<<no1<<" * "<<no2<<"= "<<(no1*no2)<<endl;
		}
		
		void div(){
			cout<<no1<<" / "<<no2<<"= "<<(no1/no2)<<endl;
		}
};

int main(){
	Maths m;
	int n1,n2;
	cout<<"enter two num";
	cin>>n1>>n2;
  	m.set_data(n1,n2);
  	m.add();
  	m.sub();
  	m.mult();
  	m.div();
}
