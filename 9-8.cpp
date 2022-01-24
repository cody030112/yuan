//StudybarCommentBegin
#include <stdio.h>
#include<string.h>
void strconnect(char *str1,char *str2)
{
	strcat(str1,str2);
}
 
int main()
{
	char str1[100], str2[100];
	scanf("%s", str1);
	scanf("%s", str2);
	strconnect(str1, str2);
	printf("%s", str1);
}
//StudybarCommentEnd

