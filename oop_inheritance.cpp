#include<iostream>
using namespace std;
class X
{
    private://most secure
        int datax1;
    protected:
        int datax2;
    public://least secure
        int datax3;
        void hi_x()
        {
            cout<<"\nX says hi";
        }
};

class Y:public X
    {
    private:
        int datay1;
    protected:
        int datay2;
    public:
        int datay3;
       
       
        void set_all()
        {
            datay1=1;
            datax2=10;//inherited
            datay2=100;
            datax3=1000;//inherited
            datay3=2000;
        }
        void get_all()
        {
            cout<<"datax3:"<<datax3<<endl;
            cout<<"datay3:"<<datay3<<endl;
            cout<<"datax2:"<<datax2<<endl;
            cout<<"datay2:"<<datay2<<endl;
            cout<<"datay1:"<<datay1<<endl;
        //    cout<<"datax1:"<<datax1<<endl;
        }
        void hello_y()
        {
            cout<<"\nY says Hello";
        }
};

int main()
{
 Y obj;
 obj.set_all();
 obj.get_all();
 obj.hi_x();
 obj.hello_y();
}
