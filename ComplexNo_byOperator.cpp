#include<iostream>
using namespace std;
class Complex{
    private:
    float real;
    float imag;
    public:
    Complex()
    {
        real=0;
        imag=0;
    }
Complex(float r,float i)
{
    real=r;
    imag=i;
}
~ Complex()
{

}
void display(void)
{
    cout<<real<<"+"<<imag<<"i"<<endl;
}
//Overloading + operator
Complex operator+(Complex c)
{
    float r=real+c.real;
    float i=imag+c.imag;
    return Complex(r,i);
}

//overloading - operator
Complex operator-(Complex c)
{
    float r=real-c.real;
    float i=imag-c.imag;
    return Complex(r,i);
}

// Overloading * operator
Complex operator*(Complex c)
{
    float r=real*c.real;
    float i=imag*c.imag;
    return Complex(r,i);
}

};

int main()
{
    Complex C1(2.0,3.0);
    cout<<"Complex no. is"<<endl;
    C1.display();

    Complex C2(5.0,7.0);
    cout<<"Complex no. is"<<endl;
    C2.display();

    Complex C3(6.0,9.0);
    cout<<"Complex no. is"<<endl;
    C3.display();

    Complex C4(11.0,21.0);
    cout<<"Complex no. is"<<endl;
    C4.display();

 Complex sum= C1+C2;
    cout<<"sum is:"<<endl;
    sum.display();

    Complex subtract= C1-C2;
    cout<<"subtraction is:"<<endl;
    subtract.display();

    Complex multiply= C1*C3;
    cout<<"Multiplication is:"<<endl;
    multiply.display();
    
    return(0);
}

//output
/*PS C:\Users\Student> cd "d:\Shreya Aher\" ; if ($?) { g++ ComplexNo_byOperator.cpp -o ComplexNo_byOperator } ; if ($?) { .\ComplexNo_byOperator }
Complex no. is
2+3i
Complex no. is
5+7i
Complex no. is
6+9i
Complex no. is
11+21i
sum is:
7+10i
subtraction is:
-3+-4i
Multiplication is:
12+27i
*/