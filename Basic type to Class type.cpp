#include<iostream>
using namespace std;
class Time{
int hours,mins;
public:
	Time(int t){
		hours = t/60;
		mins=t%60;
	}
	void display()
	{
		cout<<"Total hours is "<<hours<<" and "<<mins<<endl;
	}
};
int main()
{
	int duration;
	cout<<"Please mention the duration in minutes. "<<endl;
	cin>>duration;
	Time obj =duration;
	obj.display();
	return 0;
}
