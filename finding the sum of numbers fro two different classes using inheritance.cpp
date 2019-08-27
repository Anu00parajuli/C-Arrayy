#include<iostream>
using namespace std;
class class1{
	protected:
		int num1;
		public:
			void fun1(){
				cout<<"Enter first number"<<endl;
				cin>>num1;
				}
};
class class2{
	protected:
		int num2;
		public:
			void fun2(){
				cout<<"Enter second number"<<endl;
				cin>>num2;
				}
};
class class3: protected class1, protected class2{
	public:
		void fun3()
		{
			fun1();
			fun2();
			cout<<"The sum of numbers is "<< num1+num2;
		}
};
int main()
{
	class3 obj;
	obj.fun3();
	return 0;
}

