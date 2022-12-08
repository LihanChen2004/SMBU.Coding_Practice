/*有一个以“.”结束的英文句子，起长度小于80个字节。
用指针实现，检查该句子是否 回文(正读和反读都是一样的，不考虑空格和标点符号)。
例如： 输入: MADAM I’M ADAM. 输出：YES 输入：ABCDBA. 输出：NO*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	printf("请输入一串字符\n");
	char s[100];
	char *b,*e;
	int i;
	scanf("%s",s);
	b=s;
	e=&(s[strlen(s)-1]);
	for (i=0;i<=strlen(s)/2; i++)
	{
		if(*b==*e)
		{
			b++;
			e--;
		}
		else
		{
			printf("NO");
			break;
		}
	}
	if(i>strlen(s)/2)
		printf("YES");
	return 0;
}
