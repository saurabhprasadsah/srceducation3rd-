#include<conio.h>
#include<iostream>
using  namespace std;

class student
{
	private:
		int rool;
		float marks;
		public:
			void  getchdata()
			{
				cout<<"enter roll and marks student"<<endl;
				cin>>"roll">>marks>>endl;
			}
			
            void showdata()
			{
				cout<<"roll"<<roll<<endl;
				cout<<"marks"<<marks<<endl;
			}			
};
main(){

student obj;
obj.getchdata();
obj.showdata();
return 0;
}
