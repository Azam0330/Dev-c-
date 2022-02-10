#include <iostream>
using namespace std;
int main()
{
	int time,sal,inc;
	cout<<"enter time"<<endl;
	cin>>time;
	cout<<"enter salary"<<endl;
    cin>>sal;
    
    if (time>=2 && time<=3)
{
    cout<<"Highly Efficient"<<endl;
}
    else if (time>=3 || time<=4)
{
    cout<<"improve speed"<<endl;
    inc=sal*0.05;
    cout<<"Your new salary is = "<<inc<<endl;
}
    else if (time>4)
{
    cout<<"You are FIRED"<<endl;
}
	else
{
	cout<<"invalid"<<endl;
}
    return 0;
	}
