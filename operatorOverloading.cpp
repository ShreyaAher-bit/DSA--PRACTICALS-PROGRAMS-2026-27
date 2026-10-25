#include<iostream>
using namespace std;
class complex{
    private:
    float real;
    float imag;
    public:
    complex(){
        real=0;
        imag=0;
    }
    complex(float r,float i){
        real=r;
        imag=i;
    }
    ~complex(){}
    void display(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    complex add(complex c){
        return complex(real+c.real,imag+c.imag);
    }
    complex subtract(complex c){
        return complex(real-c.real,imag-c.imag);
    }
    complex multiply(complex c){
        float r=real*c.real-imag*c.imag;
        float i=real*c.imag+imag*c.real;
        return complex(r,i);
    }

};

int main(){
    complex c1(6,7),c2(1,3);
    cout<<"\nFirst Complex Number:";
    c1.display();
    cout<<"\nSecond Complex Number:";
    c2.display();

    complex sum = c1.add(c2);
    cout<<"\nSum:";
    sum.display();
    complex diff=c1.subtract(c2);
    cout<<"Difference:";
    diff.display();
    complex prod=c1.multiply(c2);
    cout<<"Product:";
    prod.display();
    return (0);
}

//output
/*
PS C:\DSA codes> g++ operatorOverloading.cpp -o program
PS C:\DSA codes> .\program.exe
First Complex Number:6+7i

Second Complex Number:1+3i

Sum:7+10i
Difference:5+4i
Product:-15+25i
*/