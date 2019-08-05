#include<iostream>
#include<math.h>
using namespace std;
class height{
	int feet, inches;
	public:
		void input(){
			cout<<"Enter your heights in :"<<endl;
			cout<<"Feet :"<<endl;
			cin>>feet;
			cout<<"Inches :"<<endl;
			cin>>inches;
		}
		void display(){
			cout<<"Your height is "<<feet<<"feet"<<inches<<"inches"<<endl; 
		}
		void add(height t1, height t2);
};
   void height::add(height t1, height t2){
   	inches=t1.inches +t2.inches;
   	feet= (t1.inches/12) + (t2.inches/12) + (t1.feet+t2.feet);
   	inches = (t1.inches+t2.inches)%12 ;
   	
   }
    int main()
    {
    	height t1,t2,t3;
    	t1.input();
    	t2.input();
    	t3.add(t1,t2);
    	t3.display();
    	return 0;
    	
    	
	}
