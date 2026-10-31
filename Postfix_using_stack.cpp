#include<iostream>
#include<cmath>
#include<cctype>
#include<cstdlib>
using namespace std;
class stack{
    private:
    int arr[100];
    int top;

    public:
    stack(){
        top=-1;
    }
    void push(int val){
        arr[++top]=val;
    }

    int pop(){
        return arr[top--];
    }
};

int evaluate(char x,int op1,int op2){
    if(x=='+')
    return op1+op2;
    if(x=='-')
    return op1-op2;
    if(x=='*')
    return op1*op2;
    if(x=='%')
    return op1%op2;

    if(x=='$')
    return (int)pow(op1,op2);

    return 0;
}

int main(){
    stack s;
    char x;
    int op1,op2,val;
    char postfix[100];
    cout<<"\nEnter postfix expression:";
    cin>>postfix;
    for(int i=0;postfix[i]!='\0';i++ ){
        x=postfix[i];
        if(isdigit(x)){
            
            s.push(x-'0');
        }
        else{
            op2=s.pop();
            op1=s.pop();
            val=evaluate(x,op1,op2);
            s.push(val);
        }
    }
    cout<<"\nAnswer= "<<s.pop();

    return 0;
}
//Output
/*PS D:\Shreya Aher> cd "d:\Shreya Aher\" ; if ($?) { g++ Postfix_using_stack.cpp -o Postfix_using_stack } ; if ($?) { .\Postfix_using_stack }

Enter postfix expression:55+

Answer= 10
PS D:\Shreya Aher> */ 