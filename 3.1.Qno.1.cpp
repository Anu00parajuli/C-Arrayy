//write a class circle with one member variable radius. Include a member function getradius to get data from the user and another function printarea() to display
// the data. 
#include<iostream>
#include<math.h>
using namespace std;
class circle{
	float radius;
	public:
		void getradius()
		{
			cout<<"Enter the radius of the circle"<<endl;
			cin>>radius;
		}
		void printarea()
		{
			cout<<"the total area of the circle is "<<3.14*radius*radius<<endl;
			
		}
};
int main()
{
	circle obj;
	obj.getradius();
	obj.printarea();
	return 0;
	
}
