#include<iostream>
using namespace std;

class A{
public:
    // default constuctor
    A(){
        cout<<"default constuctor of class A"<<endl;
    }
    // parameterized constructor
    A(int x){
        cout<<"parameterized construcotr of class A"<<endl;
    }
    //copy constructor
    A(const A &obj1){
        cout<<"copy construcotr of class A"<<endl;
    }
    // destructor
    ~A(){
        cout<<"destrucotr of class A"<<endl;
    }
};

class B{
public:
    // default constuctor
    B(){
        cout<<"default constuctor of class B"<<endl;
    }
    // parameterized constructor
    B(int x){
        cout<<"parameterized construcotr of class B"<<endl;
    }
    // copy constructor
    B(const B &obj1){
        cout<<"copy constructor of class B"<<endl;
    }
    // destructor
    ~B(){
        cout<<"destrucotr of class B"<<endl;
    }
};

class C:public A,public B{
public:
    // default constuctor
    C():A(),B(){
        cout<<"default constuctor of class C"<<endl;
    }
    // parameterized constructor
    C(int x):A(x),B(x){
        cout<<"parameterized construcotr of class C"<<endl;
    }
    // copy constructor
    C(const C &obj1):A(obj1),B(obj1){
        cout<<"copy constructor of class C"<<endl;
    }
    // destructor
    ~C(){
        cout<<"destrucotr of class C"<<endl;
    }

};

int main(){

    cout<<"\n program starting..\n"<<endl;

    cout<<"first object create"<<endl;
    C c1;

    cout<<"\n cout<<second object create.."<<endl;
    C c2(10);

    cout<<"\n third object create..."<<endl;
    C c3(c1);//copy constructor called
    return 0;
}
