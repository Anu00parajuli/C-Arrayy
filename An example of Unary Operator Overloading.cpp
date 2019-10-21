#include<iostream>
using namespace std;
class overloading{
	int count;
	public:
		void getdata(int i)
		{
			count = i;
		}
		void showdata()
		{
			cout<<"The value of count is : "<< count <<endl;
		}
		void operator ++ (){
			++count;
		}
};
int main()
{
	overloading obj;
	obj.getdata(5);
	obj.showdata();
	++obj; // operator overloading
	obj.showdata();
	
	
}
