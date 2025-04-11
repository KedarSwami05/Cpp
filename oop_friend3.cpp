//create addition a frined class that read data from
//Inch class where info is stored in inches
//Feet class where data is soted in feet
//addition would print data added from Inch and Feet in CM

#include<iostream>
using namespace std;
class Inch;//forward declaretion:there is class comming up
class Feet
{
private:
    float feets;
public:
    Feet (float f)
    {
        feets=f;
    }
        friend void addition(Inch obj_i,Feet obj_f);
};

class Inch
{
private:
    float inches;
public:
    Inch(float i)
    {
        inches=i;
    }
        friend void addition(Inch obj_i,Feet obj_f);
};

void addition(Inch obj_i,Feet obj_f)
{
   cout<<"\nFeet   :"<<obj_f.feets;
   cout<<"\n      +";
   cout<<"\nInches :"<<obj_i.inches;
   cout<<"\n----------------------";
   cout<<"\n       :"<<(obj_f.feets*12*2.5)+(obj_i.inches*2.5)<<" CM";

}


int main()
{
    Feet f(6.3);
    Inch i(123);
    addition(i,f);
   
 
}
