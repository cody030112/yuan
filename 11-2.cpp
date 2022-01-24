//StudybarCommentBegin
#include <stdio.h>
struct student
{
    char name[10];
    int no;
    float score[2];
}stu[45];
void maxscore(struct student *pst,int n)
{
	float max=0;
	int i,j,k1,k2;
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			if(stu[i].score[j]>max){
			max=stu[i].score[j];
			k1=i;
			k2=j+1;
		}
	}
}
	printf("MaxSore=%5.1f,Name is %s,No=%ld,Score.No=%d\n",max,stu[k1].name,stu[k1].no,k2);
}
void average(struct student *pst,int n)
{
	int i,j,k,flag=1;
	float max1=0,max2=0,average1,average2;
	for(i=0;i<n;i++){
		max1+=stu[i].score[0];
	}
	for(j=0;j<n;j++){
		max2+=stu[j].score[1];
	}
	average1=max1/n;
	average2=max2/n;
	for(k=0;k<n;k++){
		if(stu[k].score[0]<average1&&stu[k].score[1]<average2){
			printf("Below average:\n");
            printf("%s\t\t%ld\n",stu[k].name,stu[k].no);
            flag=0;
		}
	}
	if(flag){
		printf("Not Found");
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	getchar();
    for(i=0;i<n;i++){
        gets(stu[i].name);
        scanf("%d",&stu[i].no);
        scanf("%f",&stu[i].score[0]);
        scanf("%f",&stu[i].score[1]);
        getchar();
    }
    maxscore(stu,n);
	average(stu,n);
    
    
    return 0;
}


//StudybarCommentEnd#include<stdio.h>

