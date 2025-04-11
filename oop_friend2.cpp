#include<iostream>
using namespace std;
class Info1;//forward declaretion:there is class comming up

class Data1
{
private:
    string secrate;
public:
    Data1(string secrate)
    {
        this->secrate=secrate;
    }
    void show_secrate()
    {
        cout<<"\nMember Access:Secrate is:"<<secrate;
    }
        friend void tell_secrate(Data1 object1,Info1 object2);
};

class Info1
{
private:
    string line;
public:
    Info1(string secrate)
    {
        line=secrate;
    }
    void show_line()
    {
        cout<<"\nMember Access:Secrate is:"<<line;
    }
    friend void tell_secrate(Data1 object1,Info1 object2);
};

void tell_secrate(Data1 object1,Info1 object2)
{
    cout<<"\nAccess from friend:for Data1"<<object1.secrate;
    cout<<"\nAccess from friend:for Info1"<<object2.line;
   
}


int main() {
    Data1 obj1("my secrate kisiko mat bolna");
    obj1.show_secrate();
    Info1 obj2("abba dabba jabba");
    obj2.show_line();
   
    tell_secrate(obj1,obj2);
    return 0;
}
