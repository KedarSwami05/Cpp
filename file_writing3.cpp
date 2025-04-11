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
    ofstream writer(user+".txt");
    cout<<"\nFile created:";
    string line;
    do
    {
     cout<<">>>";    
    getline(cin,line);
    if (line=="stop"|| line=="STOP")
        break;
    writer<<line<<"\n";
    }while(1);
   
    writer.close();
    cout<<"Files saved";
}
