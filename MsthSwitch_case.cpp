//create class Maths that
//has add(),sub(),mul(),div()
//will print no1 (operation) no2 = answer
//has set() to set data
//give menu driven option 1 set 2 add 3 sub 4 div 5 mul
//at each time user will first set data and then call respective function
//1 set: 10,20  2 10+20=30 3 10-20=-10....

#include<iostream>
using namespace std;
class Math
{
private:
int no1,no2;

public:
void set_data(int no1,int no2)
{
 this->no1=no1;
 this->no2=no2;
}
void add()
{
  cout<<no1<<" + "<<no2<<"= "<<(no1+no2)<<endl;
}
void sub()
    {
        cout << no1 << " - " << no2 << " = " << (no1 - no2) << endl;
    }
    void mul()
    {
        cout << no1 << " * " << no2 << " = " << (no1 * no2) << endl;
    }
    void div()
    {
   
        cout << no1 << " / " << no2 << " = " << no1 / no2<< endl;
       
    }
};
int main()
{
  Math m;
    int choice;
    int n1, n2;

    do
    {
        cout << "\nMenu:\n";
        cout << "1. Set Data\n";
        cout << "2. Add\n";
        cout << "3. Subtract\n";
        cout << "4. Divide\n";
        cout << "5. Multiply\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter two numbers: ";
            cin >> n1 >> n2;
            m.set_data(n1, n2);
            break;
        case 2:
            m.add();
            break;
        case 3:
            m.sub();
            break;
        case 4:
            m.div();
            break;
        case 5:
            m.mul();
            break;
        case 0:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);
}
