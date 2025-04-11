#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream writer("my_file2.txt");
    string line;
    do
    {
    getline(cin,line);
    if (line=="QUIT"|| line=="quit")
        break;
    writer<<line<<"\n";
    }while(1);
   
    writer.close();
    cout<<"Files saved";
}
