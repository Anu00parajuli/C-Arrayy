#include<iostream>
using namespace std;
class Room{
	protected:
		int length;
		int breadth;
		public:
		void area(){
			cout<<"The area is "<<length*breadth<<endl;
		
		}
};
class BedRoom: protected Room{
	int height;
	public :
		void setData(){
			cout<<"Enter the length,breadth and height of the room respectively"<<endl;
			cin>>length>>breadth>>height;
		}
		void volume(){
			area(); //calling area here since area in bedroom is protected and itcant be called from outside
			cout<<"The volume is"<<length*breadth*height<<endl;
			
		}
		
};
int main()

{
	BedRoom obj;
	obj.setData();

	obj.volume();
	return 0;
}
