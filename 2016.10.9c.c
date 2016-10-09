#include <stdio.h>
#define N 40
#int readscore(int score[]);
void printscore(int score[],int n);
void asc(int a[],int n[]);
void des(int a[],int n[]);
void swap(int *x,int *y);
main()
{
    int score[N],n;
    int order;
    n=readscore(score);
    printf("total studens are %d\n",n);
    printf("enter 1 to sort in asc order\n");
    printf("enter other to sort in des order\n");
    scanf("%d",&order);
    printf("data item in orignal order\n");
    printscore(score,n);
    if(order==1)
    {
        printf("data item in asc order\n");
	asc(score,n);
    }
    else
    {
        des(score,n);
	printf("data item in des order\n");
    }
    printscore(score,n);
}
int readscore(int score[]);
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("input your the %d number\n",i+1);
	scanf("%d",&score[i]);
    }
    return i;
}
void printscore(int n,int score[]);
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%-5d",score[i]);
    }
    printf("\n");
}
void asc(int a[],int n)
{
    int i,,j,k;
    for(i=0;i<n-1;i++)
    {
        k=i;
	for(j=i+1;j<n;j++)
	{
	    if(score[j]<score[k]) k=j;

	}
	if(k!=i) swap(&a[j],&a[i]);
    }
}
void des(int a[],int n)
{
    int i,j,k;
    for(i=0;i<n-1;i++)
    {
        k=i;
	for(j=i+1;j<n;j++)
	{
	    if(score[j]>score[k]) k=j;
	}
	if(k!=i) swap(&a[j],&a[i]);
    }
}
void swap(int *x,int *y)
{
    int *temp;
    temp=*x;
    *x=*y;
    *y=temp;

