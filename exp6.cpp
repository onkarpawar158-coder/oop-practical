#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string name;
    int rollNo;
    float marks;
    // create a file name is student.txt
    ofstream fout("student.txt");
    cout<<"enter the username:";
    getline(cin,name);
    cout<<"enter your roll no:";
    cin>>rollNo;
    cout<<"enter your marks";
    cin>>marks;

    // write the data into file
    fout<<name<<endl;
    fout<<rollNo<<endl;
    fout<<marks<<endl;

    fout.close();
    cout<<"infromation written sucessfully"<<endl;


    // read the file
    ifstream fin("student.txt");
    
    // read the information from file
    getline(fin,name);
    fin>>rollNo;
    fin>>marks;

    // display the all data contain in file
    cout<<"\n --- student information ---"<<endl;
    cout<<"name is:"<<name<<endl;
    cout<<"roll no is:"<<rollNo<<endl;
    cout<<"marks is:"<<marks<<endl;

    fin.close();
    return 0;
}