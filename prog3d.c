#include<stdio.h>
#define MAX 10
int main()
{
    int a[MAX][MAX], n, i, j, k;
    printf("\n Enter the n value:");
    scanf("%d",&n);
    printf("\n Enter the graph data:\n");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    for(k=0;k<n;k++)
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    if(a[i][k]+a[k][j]<a[i][j])
    a[i][j]=a[i][k]+a[k][j];
    printf("\nResultant path matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}
