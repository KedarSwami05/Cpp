#include<iostream>
using namespace std;

class Manager{

    private:
    string name;
    float salary;


    public:
    static int count;
    Manager(){
        name="Krish";
        salary=49000;
        count++;
    }

    Manager(string nm, float sal){

        name=nm;
        salary=sal;
        count++;
    }

    void display(){
        cout<<"Name of Mgr :"<<name;
        cout<<"sal of mgr :"<<salary;
    }

    static int getCount(){
        return count;


    }

};

int Manager::count=0;

    int main(){
        Manager mgr1;
        Manager mgr2;
        Manager mgr3;
        Manager mgr4("Patil",45000);
        int objectCount=Manager::getCount();
        cout<<"class manager"<<objectCount;
        
        return 0;


    }    

