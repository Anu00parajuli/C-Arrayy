#include<iostream>
using namespace std;
class area{
	int x,y;
	public:
		//default constructor
		area()
		{
	    	x=0;
	    	y=0;
			cout<<"Enter the length and breadth of rectangle "<<endl;
			cin>>x>>y;
			cout<<"The area of the rectangle is"<<x*y<<endl;
		}
};
int main()
{
	area t1;

	return 0;
}
