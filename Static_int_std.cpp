#include<iostream>
using namespace std;

class Student
{
	private:
		string name,gender;
		float percentage;
		int roll_no;
		static int r_no;
		
	public :
		Student(string name,string gender,float percentage )
		{
			this->name=name;
			this->gender=gender;
			this->percentage=percentage;
			this->roll_no=++r_no;
			
			cout<<"\nname is: "<<name<<"\ngender is :"<<gender<<"\npercentage are :"<<percentage<<"\nroll of std is :"<<roll_no<<endl;
		}
		
		~Student(){
			cout<<name<<" deleted";
		}
	
		
	};
	int Student::r_no;

	int main(){
			string nm,g;
			float per;
			
			cout<<"std details are : ";
			cin>>nm>>g>>per;
			Student s(nm,g,per);
		}
