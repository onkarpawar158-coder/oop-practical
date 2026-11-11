#include<iostream>
using namespace std;

class Matrix{
    int a[10][10];
    int rows,cols;

public:
    Matrix(){
        rows = 0;
        cols = 0;
    }

    //read the matrix
    void read(){//default constructor
        cout<<"Enter the rows and columns number:";
        cin>>cols>>rows;
        
        if(rows<=0 || cols<=0 || rows > 10 || cols > 10){
            cout<<"invalid matrix size..."<<endl;
            rows = 0;
            cols = 0;
            return;
        }

        cout<<"Enter matix elements :"<<endl;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                cin>>a[i][j];
            }
        }
    }

    // display the matrix
    void display(){
        if(rows==0 || cols==0){
            cout<<"matrix is empty.."<<endl;
            return;
        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    } 

    // Addition of two matrix 
    Matrix Add(Matrix m){
        Matrix result;// create a variable to store the result after add two matrix
        if(m.rows!=rows || m.cols!=cols){
            cout<<"matrix is not possible.."<<endl;
            return result;
        }

        result.rows =rows;
        result.cols =cols;

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                result.a[i][j] = a[i][j] + m.a[i][j]; 
            }
        }

        return result;

    }

    // Substraction of matrix
    Matrix Substraction(Matrix m){
        Matrix result;
        if(m.rows!=rows || m.cols!=cols){
            cout<<"matrix substraction not possible.."<<endl;
            return result;
        }

        result.rows =rows;
        result.cols =cols;
    
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                result.a[i][j] = a[i][j] - m.a[i][j];
            }
        }
        return result;
    }

    Matrix Multi(Matrix m){
        Matrix result;

        if(cols != m.rows){
            cout<<"multiplication is not possible.."<<endl;
            return result;
        }
        result.rows = rows;
        result.cols = cols;

        for(int i=0;i<result.rows;i++){
            for(int j=0;j<result.cols;j++){
                result.a[i][j] = 0;
                for(int k=0;k<cols;k++){
                    result.a[i][j] += a[i][k] * m.a[k][j];
                }
            }
        }
        return result;
    }

};

int main(){
    Matrix m1,m2,result;
    cout<<"Enter the first matrix:"<<endl;
    m1.read();

    cout<<"enter the second matrix:"<<endl;
    m2.read();

    cout<<"---first matrix is---"<<endl;
    m1.display();

    cout<<"---second matrix is---"<<endl;
    m2.display();

    cout<<"----- Addition of matrix----"<<endl;
    result = m1.Add(m2);// sum will receive the returned matrix
    result.display();

    cout<<"----- substraction of matrix----"<<endl;
    result = m1.Substraction(m2);// sum will receive the returned matrix
    result.display();

    cout<<"----- Multiplication of matrix -----"<<endl;
    result = m1.Multi(m2);
    result.display();

    return 0;
}