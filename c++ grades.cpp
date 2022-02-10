#include <iostream> 
using namespace std; 
int main() 
{ 
  char grade; 
   cout<<"Enter your grade:"<<endl;
   cin>>grade;
  
  if (grade=='A'|| grade=='a')
   cout<<"Your average must be between 90 – 100"<<endl;
  
  else if (grade=='B' || grade=='a')
   cout<<"Your average must be between 80 - 89"<<endl;
     
  else if (grade=='C' || grade=='c')
   cout<<"Your average must be between 70 - 79"<<endl;
  
  else if (grade=='D' || grade=='a')
   cout<<"Your average must be between 60 - 69"<<endl;
     
	else
	cout<<"Your average must be below 60"; 
	return 0;
		}
