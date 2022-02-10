#include<iostream>
#include<cmath>
using namespace std;
int main()
{  float a,b;
   cout<<"ENter any two number "<<endl;
   cin>>a>>b;
   char op;
   cout<<"Enter Operation (+,-,*,/)"<<endl;
   cin>>op;
   
   switch(op)
   {
   	case '+':
   	cout<<"Addision of two number is = " <<a+b<<endl;
   	break;
    case '-':
   	cout<<"Subtraction of two number is = " <<a-b<<endl;
   	break;
	case '*':
   	cout<<"Multiplication of two number is = " <<a*b<<endl;
   	break;
	case '/':
   	cout<<"Division of two number is = " <<a/b<<endl;
   	break;
	                                                      
   default :
   cout<<"wrong operator"<<endl;
                                                        }
   return 0;
                                                        }
