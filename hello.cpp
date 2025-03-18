//namespace
//logical collection of classes

#include<iostream>

using namespace std;

class Person{
    private:
    int age;
    string name;

    public:
    void setAge(int a){
        age =a;
    } 
    int getAge()
    {
        return age;
    }
    void setName(string n){
        name=n;
    }
    string getName(   ){
        return name;
    }


    //constructor:defult constructor
    //constructor overloading
    Person()
    {
        cout<<"Person obj created"<< endl;
    }

     //parameterized constructor
    Person(int ag,string nm )
    {
        age=ag;
        name=nm;
        
        cout<<"Person obj created"<< endl;

    }

    ~Person()
    {
        cout<<"Person obj is getting distroied"<<endl;
    }

    void show()
    {
        cout<<"Age:"<<age<<endl;
        cout<<"Name:"<<name<<endl;
       
    }

    void showDetails()
    {
        cout<<"Person Details:"<<endl;
        cout<<"Age"<<endl;
        cout<<"Name"<<endl;
        
    }

    void performTask()
    {
        cout<<"Doing imp task"<<endl;
    }


};

int main()
{
    Person p1;
    p1.setAge(20);
    p1.setName("Kedar");
    cout<<p1.getAge()<< p1.getName() <<endl;
   
    Person p2;
    p2.setAge(23);
    p2.setName("Krishna");
    cout<< p2.getAge()<< p2.getName() <<endl;

    Person p3(24,"Himani");
    p3.show();
    
    p3.showDetails();
    p3.performTask();

    

    Person *ptrPerson123=new Person();
    ptrPerson123->setAge(45);
    ptrPerson123->setName("Ravi");
    cout<<ptrPerson123->getAge()<<ptrPerson123->getName()<<endl;
    ptrPerson123->show();
    delete ptrPerson123;


    //Point startPoint(45,67);
    //Point endPoint;
    return 0;

}                                               