#include<iostream>
#include<string>
using namespace std;

template <class T>
class Library{
    T id[100];
    string name[100];
    int count = 0;
public:
    Library(){
        count = 0;
    }

    void addBook(){
        cout<<"Enter the Book Id:";
        cin>>id[count];

        cin.ignore();// so that getline() does not read that leftover.( Enter key consider as an empty book name)
        cout<<"Enter the Book name:";
        getline(cin,name[count]);
        count++;
        cout<<"\n Book added sucessfully"<<endl;
    }

    void display(){
        if(count == 0){
            cout<<"No any book is available"<<endl;
            return;
        }
        cout<<"\n Book details"<<endl;
        for(int i=0;i<count;i++){
            cout<<"BOOK ID : "<<id[i]<<endl;
            cout<<"BOOK NAME : "<<name[i]<<endl;
        }
    }

    void searchBook(){
        T searchId;//	Creates a variable of template type
        cout<<"Enter the searchId :";
        cin>>searchId;
        for(int i=0;i<count;i++){
            if(searchId == id[i]){
                cout<<"   BOOK FOUND"<<endl;
                cout<<"Book Name : "<<name[i]<<endl;
                return;
            }
        }
        cout<<"NOT FOUND"<<endl;
    }
};

int main(){
    Library<int> obj;
    int choice;
    do{
        cout<<"\n ---Library Managment system ---"<<endl;
        cout<<"1 . Add Book"<<endl;
        cout<<"2 . display Books"<<endl;
        cout<<"3 . search Books"<<endl;
        cout<<"4 . Exit"<<endl;

        cout<<"Enter your choice : ";
        cin>>choice;

        switch (choice)
        {
        case 1:
            obj.addBook();
            break;
        case 2:
            obj.display();
            break;
        case 3:
            obj.searchBook();
            break;
        case 4:
            cout << "Exiting Program..." << endl;
            break;
        default:
            cout<<"Invalid choice !!!"<<endl;
        }
    }while (choice!=4);
    return 0;
}


