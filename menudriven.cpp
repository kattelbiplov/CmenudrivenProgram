#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	int choice,n,i,sum=0,num,a,b;
	while(1){
		printf("**MENU**");
		printf("\n 1. find sum of n natural numbers");
		printf("\n 2. find given number is odd or even");
		printf("\n 3. find maximum of two number using conditional operator");
		printf("\n 4. exit from the program");
		printf("enter your choice");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("enter the value of n:");
				scanf("%d",&n);
				for(i=0;i<=n-1;i++){
					sum=sum+i;
				}
				printf("the sum of n natural number is %d",sum);
				break;
			case 2:
				printf("enter the number:");
				scanf("%d",&num);
				if(num%2==0){
					printf("even");
				}else{
					printf("odd");
				}
				break;
			case 3:
				printf("enter two numbers for a and b:");
				scanf("%d",&a);
				scanf("%d",&b);
				if(a>b){
					printf("a is maximum");
				}else{
					printf("b is maximum");
				}
				break;
			case 4:
				exit(0);
				default:printf("wrong choice");
		}
	}
}
