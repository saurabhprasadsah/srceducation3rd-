#include<conio.h>
#include<iostream>
using namespace std;

class emp
  {
  	    private:
  		int empid;
  		char empname[30];
  		long int sal;
  		public:
  			
  		void getdata();
		void getshow();  	
  };
  
 
   void emp::getdata()
 {
 	cout<<"enter employe id,name &salary";
 	cin>>empid;
 	cin.getline(empname,30);
 	cin>>sal;
 }
  void emp::showdata()
  {
	cout<<"employe id =<<empid<<endl";
	cout<<"name " = <<empname<<endl;
	cout<<"salary"= <<sal<<endl;
  }  
 
 main(){
 	
 	emp obj;
 	obj.getdata();
 	obj.showdata();
 	return 0;
 	
 }
