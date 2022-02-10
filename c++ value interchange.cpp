#include<iostream>
using namespace std;
int main()
{ int C,D;
  int A;
  cout<<"Enter value of C :"<<endl;
  cin>>C;
  cout<<"Enter value of D:"<<endl;
  cin>>D;
  A=C;
  C=D;
  D=A;
  
  cout<<"The value of C is "<<C<<endl;
  cout<<"The value of D is "<<D<<endl;
  
  return 0;
  
}
