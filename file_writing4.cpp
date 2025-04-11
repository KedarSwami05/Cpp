//ASK USER HIS.HER NAME CREATE FILE OF NAME
//WRITE DETAILS IN IT TILL USER SAYS STOP/stop
//save file
//in input show '>>>' console to read data
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string user;
    cout<<"Enter your name:";
    cin>>user;
    ifstream reader(user+".txt");
    string line;
    while(reader.eof()!=1)//Enf Of File 1 if yes else 0
     {
         getline(reader,line);
         cout<<line<<"\n";
     }
   
    reader.close();
    cout<<"Files closed";
}
