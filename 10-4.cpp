//StudybarCommentBegin
#include <stdio.h>

#define CLASS 3
#define STU 4

int FindMax(int *p, int m, int n, int *pRow, int *pCol);
int main()
{
    int score[CLASS][STU], i, j, maxScore, row, col;
//    printf("Please enter score:\n");
    for (i=0; i<CLASS; i++)
    {
        for (j=0; j<STU; j++)
        {
            scanf("%d",&score[i][j]);     /*����ѧ���ɼ�*/
        }
    }
    
    /*������߷ּ���ѧ�����ڰ�ź�ѧ��*/
    maxScore = FindMax(*score, CLASS, STU, &row, &col);
    
    printf("maxScore = %d, class =%d, number =%d\n",maxScore,row+1,col+1);
}
//StudybarCommentEnd
int FindMax(int *p,int m,int n,int *pRow,int *pCol)
{
	int k=*p;//*p��p[0]һ����˼��*(p+i)��p[i]һ����˼ 
	int i;
	for(i=0;i<m*n;i++){
		if(*(p+i)>k){
			k=*(p+i);
			*pRow=i/n;
			*pCol=i%n;
		}
	}
	return k;
}
