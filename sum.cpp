#include<stdio.h>
int sum(int a,int b);
void greeting();
int formula1(int a,int b);
int fact(int x);

int main(){
	int a=10;
	int b=20;
	greeting();
	int c=sum(a,b);
	printf("%d\n",c);
	greeting();
	int factorial=fact(5);
	printf("%d",factorial);
	int res=formula1(2,3);
	printf("\n%d",res);
	return 0;
}



int fact(int x){
	if(x==1){
		return 1;
	}else{
		return x*fact(x-1);
	}
}
int formula1(int a,int b){
	int result=((a*a)+(b*b)+(2*a*b));
	return result;
}
void greeting(){
	printf("Hello World\n");
}

int sum(int a,int b){
	int sum=a+b;
	return sum;
}
