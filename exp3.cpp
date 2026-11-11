#include<iostream>
#include<string>
using namespace std;

class Publication{
protected:
    string title;
    int price;

public:
    void getData(){
        cout<<"Enter the title:";
        cin>>ws;
        getline(cin,title);

        cout<<"enter the price:";
        cin>>price;
        if(price<=0){
            throw price;
        }
    }

    void display(){
        cout<<"title is:"<<title<<endl;
        cout<<"price is:"<<price<<endl;
    }

    void getZero(){
        title = '0';
        price = '0';
    }
};

class Book:public Publication{
protected:
    int pages = 0;
public:
    void getBookData(){
        getData();
        cout<<"Enter the pages:";
        cin>>pages;
        if(pages<=0){
            throw pages;
        }
    }

    void displayBook(){
        display();
        cout<<"pages is:"<<pages<<endl;
    }

    void getBookZero(){
        getZero();
        pages = '0';
    }
};

class Tape:public Publication{
protected:
    int playTime;
public :
    void getTapeData(){
        getData();
        cout<<"enter the play time in min:";
        cin>>playTime;
        if(playTime<=0){
            throw playTime;
        }
    }

    void displayTape(){
        display();
        cout<<"play time of tape is:"<<playTime<<endl;
    }

    void getTapeZero(){
        getZero();
        playTime = '0';
    }
};
int main(){
    Book b;
    Tape t;

    try{
        cout<<"Enter the book details .....\n";
        b.getBookData();

        cout<<"Enter the tape details......\n";
        t.getTapeData();
    }
    catch(...){
        cout<<"invalid details..."<<endl;
        cout<<"all values are set to be zero"<<endl;

        b.getBookZero();
        t.getTapeZero();
    }

    cout<<"\n\n---- Books Details ---"<<endl;
    b.displayBook();
    cout<<"\n\n---- Tape Details ----"<<endl;
    t.displayTape();

    cout<<"---* program has ended *---"<<endl;
    return 0;
}