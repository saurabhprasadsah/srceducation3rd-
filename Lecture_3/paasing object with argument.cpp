#include<iostream>
using namespace std;
#include<conio.h>
 
 
class sample
{
	int x;
	int c;
	public:
		void getdata(int b)
		{
			x=b;
		}
		void sum(sample s1,sample s2)
		{
			c = s1.x + s2.x;
		}
		void shwdata()
		{
			cout<<"value of x="<<x<<endl;
		}
	
};
main()
{
	sample A,B,c;
	A.getdata(10);
	B.getdata(20);
	A.shwdata();
	B.shwdata();
	c.sum(A,B);
	c.showdata();
	return 0;
}
