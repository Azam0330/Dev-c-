#include<iostream>
using namespace std;
int main ()
{
	cout<<" 1:sausage= 220Rs 2: cheese and mushroom omelet= 50Rs"; 
	cout<<" paratha= 25Rs : french toast= 45Rs"; 
	cout<<" coffee= 120Rs : Tea= 40Rs : pan cake with nutella serving= 395Rs"; 
	
	char name [20];
	cout<<"\n enter your name: ";
	cin>>name;
	
	int item;
	cout<<"\n enter your item: ";
	cin>>item;
	
	int qty;
	cout<<"\n enter your qty: ";
	cin>>qty;
	
	cout<<"\n costumer: " <<name;
	if(item==1){
		int bill;
		bill=qty*500;
		cout<<"\n Bill is: " <<bill;
	}
	else{
		int bill2;
		bill2=qty*500;
		cout<<"\n bill2 is: " <<bill2;
	}
	return 0;
	
}
