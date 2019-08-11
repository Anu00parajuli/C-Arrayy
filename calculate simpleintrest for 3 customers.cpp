#include<iostream>
#include<math.h>
using namespace std;
class calculatesi{
	float principle,time,rate,si;
	public:
		void input(){
			cout<<"Enter principle amount, time "<<endl;
			cin>>principle>>time;
			si=(principle*rate*time)/100;
			cout<<"The calculated simple intrest for the particular principle amount "<<si<<endl;
			
		}
};
 int main()
 {
 	float rate = 8/100;
 	calculatesi c1,c2,c3;
 	c1.input();
 	c2.input();
 	c3.input();
 	return 0;
 }
