#include<iostream>
using namespace std;
int main ()
{
 float sp,cp,pr;
 cout<<"\t * Profit and Loss Calculation * "<<endl;
 cout<<"\n";
 cout<<"Enter the Sale Price of Product "<<endl;
 cin>>sp;
 cout<<"Enter the Cost Price of Product "<<endl;
 cin>>cp;
 pr=sp-cp;
 if (sp>cp)
 {
  cout<<"\n";
  cout<<"You have total profit of "<<pr;
 } 
 else if (sp<cp)
 {
  cout<<"\n";
  cout<<"You have total loss of "<<-pr;
 }
 else
 {
  cout<<"You have 0 Profit 0 Loss"<<endl;
 }
 return 0;
}
