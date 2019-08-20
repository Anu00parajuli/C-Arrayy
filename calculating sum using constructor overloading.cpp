#include<iostream>
using namespace std;
class copyy{
	//constructor overloading
	int x,y;
	public:
	copyy()
	{
		cout<<"Enter any two integers "<<endl;
		cin>>x>>y;
		cout<<"the sum of two integers using default constructor is"<<x+y<<endl;
		
		
	}
	copyy(int a ,int b)
	{
		x=a;
		y=b;
		cout<<"The required sum of integers using parameterized constructor is"<<x+y;
		
	}
};
int main()
{
	copyy t2;
	copyy t1(5,5);
	return 0;
}
