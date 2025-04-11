#include<iostream>
using namespace std;
class Data
{
private:
    string secrate;
public:
    Data(string secrate)
    {
        this->secrate=secrate;
    }
    void show_secrate()
    {
        cout<<"\nMember Access:Secrate is:"<<secrate;
    }
    friend void tell_secrate(Data object);
};
void tell_secrate(Data object)
{
    cout<<"\nAccess from friend:"<<object.secrate;
}


int main() {
    Data obj("my secrate kisiko mat bolna");
    obj.show_secrate();
    tell_secrate(obj);
    return 0;
}
