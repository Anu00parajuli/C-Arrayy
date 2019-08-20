#include<iostream>
using namespace std;
class copyy{
	int num1,num2;
	public:
		copyy(int a,int b){
			num1=a;
			num2=b;
			
		}
		copyy(copyy &i)
		{
			num1=i.num1;
			num2=i.num2;
			
		}
		void display(){
			cout<<"The copied values are"<<num1 <<"and"<<num2;
		}
};
int main()
{
	copyy t1(2,3);
	copyy t2(t1);
	
	t2.display();
	return 0;
}
