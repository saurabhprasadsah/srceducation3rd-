#include<iostream>
using namespace std;
int main()
{

student obj[];
cout<<"enter 3 record \n";
for(int i=0;i<=2;i++)
obj[i].getchdata();

cout<<"\n record are";
for(int i=0;i<3;i++)
obj[i].showdata();
return 0;
}
