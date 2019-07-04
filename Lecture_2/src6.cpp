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
student s1,s2,s3;
s1.getchdata();
s2.getchdata();
s3.getchdata();

cout<<"\n record are"<<endl;
s1.showdata();
s2.showdata();
s3.showdata();
return 0;

}
