#include<iostream>
using namespace std;

class Complex{
    int real,imag;
public:
    // Default and parameterized constructor
    Complex(int r=0,int i=0){
        real = r;
        imag = i;
    }

    //overload +operator
    Complex operator+(Complex c){
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    // overloded *operator
    Complex operator*(Complex c){
        Complex temp;
        temp.real = (real* c.real)-(imag* c.imag);
        temp.imag = (real* c.imag)+(imag* c.real);
        return temp;
    }

    // overloaded >> operator
    friend istream& operator>>(istream& in,Complex& c){
        cout<<"Enter the real and imaginary parts:";
        in>>c.real>>c.imag;
        return in;
    }

    // overload << operator
    friend ostream& operator<<(ostream& out,Complex c){
        out<<c.real<<"+"<<c.imag<<"i";
        return out;
    }
};

int main(){
    Complex c1,c2,sum,product;

    cout<<"Enter the first complex number:"<<endl;
    cin>>c1;

    cout<<"Enter the second complex number:"<<endl;
    cin>>c2;

    sum = c1+c2;
    product = c1*c2;

    cout<<"\n First Complex Number:"<<c1<<endl;
    cout<<"\n second complex number:"<<c2<<endl;

    cout<<"\n Addition :"<<sum;
    cout<<"\n Multiplication:"<<product;
    return 0;
}
