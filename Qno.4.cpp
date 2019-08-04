#include<iostream>
#include<math.h>
using namespace std;
class cricket{
	public:
		char name[20];
		int runsmade,fours,sixes;
		void assign()
		{
			cout<<"Enter the name of a player"<<endl;
			cin>>name;
			cout<<"Enter the runsmade by him"<<endl;
			cin>>runsmade;
			cout<<"No. of fours"<<endl;
			cin>>fours;
			cout<<"No. of sixes"<<endl;
			cin>>sixes;
		}
		void display()
		{
			cout<<"The information of the batsmen are shown below:"<<endl;
			cout<<"Name is "<<name<<endl;
			cout<<"Runs "<<runsmade<<endl;
			cout<<"No. of fours "<<fours<<endl;
			cout<<"No. of sixes"<<sixes<<endl;
		}
};
int main()
{
	cricket obj1;
	int i;
	for(i=0;i<5;i=i+1){
	
	obj1.assign();
}
    for(i=0;i<5;i=i+1){
	
	obj1.display();
}
	return 0;
}
