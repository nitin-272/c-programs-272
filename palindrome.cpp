#include<stdio.h>
int main()
{
	
	int n,sum=0,rem,temp=0;
	printf(" enter number ");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(temp==sum)
	printf(" the number is  palindrome");
	else
	printf(" the number not palindrome");
}
