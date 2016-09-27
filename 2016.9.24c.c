#include <stdio.h>
#define N 40
int readscore(int score[]);
void printscore(int score[],int n);
void asc(int a[],int n);
void des(int a[],int n);
void swap(int *x,int *y);
int main()
{
    int score[N],n;
    int order;
    n=readscore[score];
    printf("total students are %d\n",n);
    printf("enter 1 to sort in asc order\n");
    printf("enter 2 to sort in des order\n");
    printf("data item sort in orignal order:\n");
    printscore[score,n];
    if(order==1)
    {
        printf("data item sort in asc order\n");
	asc(score,n);
    }
    else
    {
        printf("data item sort in des oeder\n");
	des(score,n);
    }
    printscore(score,n);
}
int readscore(int score[],int n)
{
    int i;
    i=-1;
    do{
        i++;
	printf("put your the %d score",i+1);
	scanf("%d",&score[i]);
    }while(score[i]>0);
    return i;
}
void printscore(int score[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%-5d",&score[i]);
    }
    printf("\n");
}
void asc(int a[],int n)
{
    int i,j,k;
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
	{
	    if(score[j]<score[k]) k=j;
	}
	if(k!=i) swap(&a[k],&a[i]);
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
	if(k!=i) swap(&a[k],&a[i]);
    }
}
void swap(int *x,int *y)
{
 int *temp;
 temp=*x;
 *x=*y;
 *y=temp;
}








#include <stdio.h>
#define N 40 
int readscore(int score[]);
void printscore(int score,int n);
void asc(int a[],int n);
void des(int a[],int n);
void swap(int *x,int *y);
main()
{
    int score[N],n;
    int order;
    n=readscore(score);
    printf("total students are %d\n", n);
    printf("enter 1 to sort in asc order\n");
    printf("enter other sort in des order\n");
    scanf("%d",&order);
    printf("data item in orignal order\n");
    printscore(score,n);
    if(order==1)
    {
        asc(score,n);
	printf("data item sort in asc order\n");
    }else
    {
        des(score,n);
        printf("data item sort in des order\n");
    }
    printscore(score,n);
}
int readscore(int score[])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter your %d score\n",n+1);
	scanf("%d",&score[i]);
    }
}
void printscore(int score[],int n)
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
    int i,j,k;
    for(i=0;i<n-1;i++)
    {
        k=i;
	for(j=i+1;j<n;j++)
	{
	    if(score[j]<score[k])
	    k=j;
	}
	if(k!=i) swap(&a[k],&a[i]);
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
	    if(score[j]>score[k])
	    k=j;
	}
	if(k!=i) swap(&a[k],&a[i]);
    }
}
void swap(int *x,int *y)
{
    int *temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

