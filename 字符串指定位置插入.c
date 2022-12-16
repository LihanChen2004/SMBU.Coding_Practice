/*
指针实现：编写函数 insert_str(s1,s2,f), 在字符串 s1 的 f 位置插入字符串 s2，
如果 f 大于 s1 的长度，则在末尾插入。
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *insert(char *s1, char *s2, int n)
{
	int len1 = 0, len2 = 0, j = n,  k = 0;
	char temp[30];
	len1 = strlen(s1);
	len2 = strlen(s2);
	if(len1<len2){
		strcat(s1,s2);
		return s1;
	}
	for (int i= 0; i<len1; i++) //复制第一个字符串到temp
		temp[k++] = s1[i];
	for (int i=0; i<len2; i++) //用第二个字符串覆盖第一个字符串从f往后的元素
		s1[j++] = s2[i]; //j初始值为main函数传入的"插入位置"
	for (int i=n;i<len1;i++) //覆盖完成后从temp补充f往后的元素
		s1[j++]=temp[i];
	s1[j] = '\0';
	return s1;
}
int main()
{	
	char a[50];
	char b[50];
	char *s1 = a;
	char *s2 = b;
	int n;
	char s3[30];
	char *newstr = s3;
	printf("请输入第一个字符串：");
	scanf("%s", s1);
	printf("请输入第二个字符串：");
	scanf("%s", s2);
	printf("请输入插入的位置：");
	scanf("%d", &n);
	newstr = insert(s1, s2, n);
	printf("%s\n", newstr);
	return 0;
}