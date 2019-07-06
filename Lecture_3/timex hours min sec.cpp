#include<iostream>
using namespace std;
#include<conio.h>
 
 
class timex{
	int h,m,s;
	void getdata(int hh,int mm,int ss)
	{
		h = hh;
		m = mm;
		s = ss;
	}
	void add(timex t1,timex t2){
		s =t1.s + t2.s;
		m =s%60;
		h =t1.h + t2.h + (m/60);
		m = m%60;
	}
	
	
	void showdata()
	{
		cout<<h<<":"<<m<<":"<<s<<endl;
	}
	
};
main(){
	timex t1,t2,t3;
	t1.getdata(2,30,55);
	t2.getdata(3,40,40);
	t3.getdata(t1,t2);
	t1.showdata();
	t2.showdata();
	t3.showdata();
}
