#include<stdio.h>
int main()
{
	int  num1 ,num2,sum,sub,mul,div;
	char ch ;
	printf(" enter operators  \n");
	scanf("%c",&ch);
	printf(" enter the numbers  \n   ");
	scanf("%d%d",&num1,&num2);
	switch(ch)
	{
		case '+':
			sum=num1+num2;
			
			printf (" the summ is %d",sum);
	break;
	case '-':
		sub=num1-num2;
			
			printf (" the subb is %d",sub);
		
			break;
	case '*':
		mul=num1*num2;
			
			printf (" the mull is %d",mul);
			break;
	case '/':      
			div=num1/num2;
			
			printf (" the divi is %d",div);
			break;
	
	

	default:
		printf("oops wrong input ");
		
	
}
}
