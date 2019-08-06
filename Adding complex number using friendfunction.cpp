#include<iostream>
#include<math.h>
using namespace std;
class complex{
       int real;
	float imaginary;
	public:
		void input(){
			cout<<"Enter real number"<<endl;
			cin>>real;
			cout<<"Enter imaginary number"<<endl;
			cin>>imaginary;
		    }
		    friend complex cadd(complex obj1,complex obj2){
			
		    	complex obj3;
		       obj3.real= obj1.real + obj2.real;
		       obj3.imaginary = obj1.imaginary + obj2.imaginary;
			   return obj3;
			}
		    void output(){
		    	cout<<"The sum of real and imaginary numbers is "<< real <<"+"<<imaginary;
			}
		};
		       
			
               int main()
			    {
                	complex obj1,obj2,obj3;
                   	obj1.input();
	                obj2.input();
	                obj3 = cadd(obj1,obj2);
	                obj3.output();
	                return 0;
}
