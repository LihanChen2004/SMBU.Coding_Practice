//用指针实现输入一行字符，将字符按照从小到大的顺序排序后输出。
#include <stdio.h>
#include <string.h>
int main(){
	char arr[50];
	int len=strlen(arr);
	char *tmp;
	printf("请输入一串字符:\n");
	gets(arr);
	for(int i=0;i<len-1;i++)
	{
		for(int j=0;j<len-i-1;j++)
		{
			if(strcmp(&arr[j],&arr[j+1]) > 0)
			{
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	printf("排序后的字符:\n");
	puts(arr);	
}
