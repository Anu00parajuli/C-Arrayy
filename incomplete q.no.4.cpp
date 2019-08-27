#include<iostream>
using namespace std;
class Student{
	protected:
		int roll_no;
		public:
			void initialize_rollnumber()
			{
				cout<<"Enter the roll number"<<endl;
				cin>>roll_no;
			}
			void display_rollnumber()
			{
				cout<<"The roll number is "<<roll_no;
			}
};
class Test : protected Student{
	protected:
		int num1,num2;
		public:
			void initialize_marks()
			{
				cout<<"Enter marks in two subjects respectively"<<endl;
				cin>>num1>>num2;
				
			}
			void display_marks()
			{
				cout<<"The marks in two subjects are "<< num1 <<"and" << num2<<endl;
			}
};
class Sport {
	protected :
		int score;
		public:
			void initialize_score()
			{
				cout<<"Enter the score in sports"<<endl;
				cin>>score;
			}
			void display_score()
			{
				cout<<"The score in sports is "<<score;
			}
};
class Result :protected Test , protected Sport{
	initialize_marks();
};
