#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int factorial(int n){
	int a,b;
	a=1;
	for(b=1; b<=n; b++) {
		a=a*b;
	}
	return a;
}

int main() {
//1. n,r을 입력 받음
	int n,r; 
	int div1, div2;
	int result;
	
	// n입력 메세지 풀력 
	printf("input the n:");
	// n 스캔
	scanf("%d",&n);
	//r입력 메세지 출력
	printf("input the r:");
	//r 스캔
	scanf("%d",&r);
//2. combination 계산
	//div1, div2정의
	div1= factorial(n); //n!
	div2= factorial(n-r) * factorial(r); //(n-r)! * r!
	//result= div1/div2 
	result= div1/div2;
	printf("C(%d,%d)= %d\n",n,r,result);
	
	return 0;

}
