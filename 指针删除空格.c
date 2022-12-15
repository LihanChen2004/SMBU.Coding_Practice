//指针实现：输入字符串s，将串中的空格删除后输出。
#include <stdio.h>
#include <string.h>
void fun(char *str){
	char *p=str;
	int i,j=0;
	for(i=0;str[i]!='\0';i++){
		if(str[i]!=' '){
			p[j++]=str[i];
		}
	}
	p[j]='\0';
	str=p;
}
int main(){
	char s[100];
	printf("请输入第一个字符串：");
	gets(s);
	fun(s);
	printf("删除空格字符串:%s\n",s);
}
