#include<iostream>
using namespace std;
class time{
	int hours,minutes,seconds;
	//add two time using constructor
	public:
		time(){
			hours=0;
			minutes=0;
			seconds=0;
			
		}
		time(int a,int b,int c){
			hours =a;
			minutes=b;
			seconds=c;
		}
		void add_time(time t2, time t3){
			seconds=t2.seconds +t3.seconds;
			minutes= t2.minutes+ t3.minutes + (seconds / 60);
			hours=t2.hours +t3.hours + (minutes / 60);
			seconds=seconds % 60;
			minutes =minutes % 60;
			
		}
		void display ()
		{
			cout<<"The calculated time is "<<hours<<":"<<minutes<<":"<<seconds;
		}
};
int main()
{
	time t1;
	time t2(3,67,789);
	time t3(4,67,789);
	time t4;
	t4.add_time(t2,t3);
	t4.display();
	return 0;
}
