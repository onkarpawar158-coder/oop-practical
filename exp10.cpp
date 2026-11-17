#include<iostream>
using namespace std;

class ATM{
    int balance;
public:
    ATM(){
        balance = 5000;
    }

    void checkBalance(){
        cout<<"current balance : Rs."<<balance<<endl;
    }

    void deposite(){
        int amount;
        cout<<"enter the deposite amount:"<<endl;
        cin>>amount;

        try{
            if(amount<=0){
                throw amount;
            }
            balance = balance + amount;
            cout<<"Money deposited sucessfully"<<endl;
        }
        catch(int x){
            cout<<"invalid amount!"<<endl;
        }
    }


    void withDraw(){
        int amount;
        cout<<"enter the withdrawal amount"<<endl;
        cin>>amount;
        try{
            if(amount<=0){
                throw amount;
            }
            if(amount>balance){
                throw "insufficient balance";
            }
            balance = balance - amount;
            cout<<"Money withdrawan sucessfully"<<endl;
        }
        catch(int x){
            cout<<"invalid amount!"<<endl;
        }
        catch(const char* msg){
            cout<<msg<<endl;
        }
    }
};
int main(){
    ATM obj;
    int choice;

    do{
        cout<<"\n === ATM MACHINE ==="<<endl;
        cout<<"1 . check Balance"<<endl;
        cout<<"2 . Deposite Money"<<endl;
        cout<<"3 . Withdraw Money"<<endl;
        cout<<"4 . Exit"<<endl;

        cout<<"Enter your choice :"<<endl;
        cin>>choice;

        switch(choice){
            case 1:
                obj.checkBalance();
                break;
            case 2:
                obj.deposite();
                break;
            case 3:
                obj.withDraw();
                break;
            case 4:
                cout<<"program is terminating"<<endl;
                break;
            default:
                cout<<"invalid choice"<<endl;
        }
    }while(choice!=4);
    return 0;
}