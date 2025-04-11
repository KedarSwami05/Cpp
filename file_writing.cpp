#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream writer("my_file.txt");
    string line;
    getline(cin,line);
    writer<<line;
    writer.close();
    cout<<"Files saved";
}

