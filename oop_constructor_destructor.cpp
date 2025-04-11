#include<iostream>
using namespace std;
class Human
{
    private:
        string gender;
    public:
        Human()//assigns befault value
        {
            gender="unknown";
            cout<<"\nDefault:a human took birth";
           
        }
        Human(string gender)//assigns passed value/s
        {
            this->gender=gender;
            cout<<"\nParameterized:a human took birth as a "<<gender;
           
        }
            Human(Human &object)//creates copy of pre-existing object
        {
            this->gender=object.gender;
            cout<<"\nCopy Constructor:a human took birth as a "<<gender;
           
        }
        void set_gender(string gender)
        {
            this->gender=gender;
            cout<<"\nGender set to "<<this->gender;
        }
       
        ~Human()
        {
            cout<<"\nR.I.P "<<gender<<".";
        }
    void intro()
    {
        cout<<"\nYou are a "<<gender;
    }
};

int main()
{
    Human h0("male");
    Human h1("female");
    Human h3("other");

}
