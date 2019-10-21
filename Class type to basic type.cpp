#include<iostream>
using namespace std;
class Time{
	int hrs,mins;
	public:
		Time(int a,int b){
			hrs=a;
			mins=b;
		}
		operator int() //casting operator function
		{
			cout<<"Class Type to Basic Conversion "<<endl;
			return (hrs*60 + mins);
		}
};
int main()
{
	int hour,min,duration;
	cout<<"Enter time in hours and minutes"<<endl;
	cin>>hour>>min;
	Time obj(hour,min);
	duration=obj; //casting conversion
	cout<<"The total duration is "<<duration;
	return 0;
}
