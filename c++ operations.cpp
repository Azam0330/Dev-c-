#include<iostream>
#include<cmath>
using namespace std;
int main()
{  float a,b;
   cout<<"ENter any two number "<<endl;
   cin>>a>>b;
   char op;
   cout<<"Enter Operation (+,-,*,/,sqrt)"<<endl;
   cin>>op;
   
   
   if (op=='+')
	 cout<<"Addision of two number is = " <<a+b<<endl;
   else if (op=='-')
   cout<<"Subtraction of number is = " <<a-b<<endl;
   else if (op=='*')
   cout<<"Multiplication of number is = " <<a*b<<endl;
   else if (op=='/')
   cout<<"Division of number is = " <<a/b<<endl;
   else if (sqrt(a))
   cout<<"Square root of a is = "<<sqrt(a)<<endl;
   
     else
      cout<<"wrong operator"; 
   return 0;
}
