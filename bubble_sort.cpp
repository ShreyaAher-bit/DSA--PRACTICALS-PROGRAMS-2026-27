#include <iostream>
 using namespace std;
 void bubble_sort(int a[],int n)
 {
 int temp;
 for(int i=0;i<n-1;i++)
 {
 for(int j=0;j<n-1;j++)
 {
 if(a[j]>a[j+1])
 {
 temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp;
 }
 }
 }
 }
 int main()
 {
 int n,a[10];
 cout<<"Enter the Size of the array= ";
 cin>>n;
 cout<<"Enter "<<n<<" integrs in any order="<<endl;
 for(int i=0;i<n;i++)
 {
 cin>>a[i];
 }
 bubble_sort(a,n);
 cout<<"sorted array= ";
 for(int i=0;i<n;i++)
 {
 cout<<a[i]<<" ";
 }
 cout<<endl;
 return 0;
 }
  /*PS C:\DSA codes> g++ bubble_sort.cpp -o program
PS C:\DSA codes> .\program.exe
Enter the Size of the array= 5
Enter 5 integrs in any order=
99 88 77 90 10
sorted array= 10 77 88 90 99 
PS C:\DSA codes> */