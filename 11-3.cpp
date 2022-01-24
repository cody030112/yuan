#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	int i,j,l=0,z=0,w=0;
	char n[6];
	for(i=0;i<10;i++){
		scanf("%s",n);
		getchar();
		if(!strcmp(strlwr(n),"li")){
			l++;
		}
		else if(!strcmp(strlwr(n),"zhang")){
			z++;
		}
		else if(!strcmp(strlwr(n),"wang")){
			w++;
		}
	}
	printf("li:%d\n",l);
	printf("zhang:%d\n",z);
	printf("wang:%d\n",w);
	
	return 0;
}
