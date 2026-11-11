#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Salary{
    int id;
    string name;
    float basic_salary;

public:
    void accept(){
        cout<<"\nEnter the staff id: ";
        cin>>id;
        
        cout<<"\nEnter the staff name:";
        cin.ignore();
        getline(cin,name);

        cout<<"\nEnter the staff Basic salary:";
        cin>>basic_salary;

    }

    // getthe name for sorting 
    string getName(){ // name is private so we can't acess it directly from main function 
        return name;
    }

    void display(){
        float DA = basic_salary*0.25;
        float HRA = 800;
        float tax = basic_salary*0.15;
        float gross_salary = basic_salary+HRA+DA;
        float net_salary = gross_salary-tax;
        cout<<"\n-----------------------------------"<<endl;
        cout<<"       --  pay slip --"<<endl;
        cout<<"-----------------------------------"<<endl;
        cout<<"staff id   :"<<id<<endl;
        cout<<"staff name :"<<name<<endl;
        cout<<"basic salary :"<<basic_salary<<endl;
        cout<<"DA(25%)      :"<<DA<<endl;
        cout<<"HRA          :"<<HRA<<endl;
        cout<<"TAX (15%)    :"<<tax<<endl;
        cout<<"Gross salary :"<<gross_salary<<endl;
        cout<<"net salary   :"<<net_salary<<endl;
        cout<<"-----------------------------------"<<endl;
    }


};
int main(){
    Salary s[100],temp;
    int n;
    cout<<"enter the no of staff:";
    cin>>n;

    cout<<"\n ---- Enter the staff details ---"<<endl;
    for(int i=0;i<n;i++){
        s[i].accept();
    }

    cout<<"\n --- staff records ---"<<endl;
    for(int i=0;i<n;i++){
        s[i].display();
    }

    //sort the records using name of staff
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(s[j].getName()>s[j+1].getName()){
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }

    cout<<"\n --- staff records after sort the records ---"<<endl;
    for(int i=0;i<n;i++){
        s[i].display();
    }

    return 0;
}
