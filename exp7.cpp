#include<iostream>
using namespace std;

// base class
class Animal{
public:
    void eat(){
        cout<<"Animal can eat"<<endl;
    }
};

//singal inheritance
class Dog:public Animal{
public:
    void bark(){
        cout<<"dog can bark"<<endl;
    }
};

// multiple inheritance
class Pet{
public:
    void play(){
        cout<<"pet can play"<<endl;
    }
};


class Puppy:public Dog,public Pet{
public:
    void weep(){
        cout<<"puppy can weep"<<endl;
    }
};


// multilevel inheritance
class BabyDog:public Dog{
public:
    void sleep(){
        cout<<"baby dog can sleep"<<endl;
    }
};

// hierarchical inheritance
class Cat : public Animal{
public:
    void meow(){
        cout<<"cat can meow"<<endl;
    }
};

int main(){
    cout<<"single inheritance:"<<endl;
    Dog d;
    d.eat();
    d.bark();

    cout<<"\n multiple inheritance"<<endl;
    Puppy p;
    p.eat();
    p.bark();
    p.play();
    p.weep();

    cout<<"\n multilevel inheritance"<<endl;
    BabyDog b;
    b.eat();
    b.bark();
    b.sleep();


    cout<<"\n Hierarchical inheritance:"<<endl;
    Cat c;
    c.eat();
    c.meow();

    return 0;
}
