#include<iostream>
int main()
{
	int num,n,bit_pos;
	printf("enter number");
	scanf("%d",&num);
	printf(" enter the Nth bit");
	scanf("%d",&n);
	bit_pos=((num>>n)&1);
	printf("the bit is %d",bit_pos);
}
