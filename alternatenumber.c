
#include<stdio.h>
main(){
	int n,d,s=0;
	
	printf("enter a number");
	scanf("%d",&n);
	while(n){
		d=n%10;
		s=s+d;
		n=n/100;
		
	}
	printf("sum of digit=%d",s);
	getch();
}
