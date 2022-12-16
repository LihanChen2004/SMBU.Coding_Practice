/*
指针实现：给你一个 32 位的有符号整数 x ，
返回将 x 中的数字部分反转后对应二进制数的结果。
如果反转后整数超过 32 位的有符号整数的范围，就返回 0。
假设环境不允许存储 64 位整数(有符号或无符号)。
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Reverse(int num)	//逆序
{
	int tmp = 0;
	while (num != 0)
	{
		tmp = tmp * 10 + num % 10;
		num /= 10;
	}
	return tmp;
}
void transform(int num,int *arr)	//十进制转32位的二进制
{
	int temp;int i=32-1;
	do
	{
		temp=num%2;
		num=num/2;
		arr[i--]=temp; 
	}
	while (num!=0);
}
int main(){
	int a;
	int result[32]={0};	//都初始化为0
	printf("请输入一个整数：");
	scanf("%d",&a);

	printf("原始数字：%d\n",a);
	if(a<0){
		result[0]=1;	//若为十进制为负数，则32位二进制数首位是1
		a=abs(a);
	}
	else result[0]=0;
	
	a=Reverse(a);	//逆序
	
	printf("逆序数字：%d\n",a);
	transform(a,result);
	
	printf("二进制逆序数字：\n");
	for(int i=0;i<32;i++){
		if(i!=0&&i%4==0){
			printf(" ");	//空四格输出
		}
		printf("%d",result[i]);
	}
}
