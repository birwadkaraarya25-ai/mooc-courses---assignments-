#include<stdio.h>
void main()
{
int i,j,k;
int rows=2,cols=3;
int arr2D[2][3];
int x=2,y=2,z=2;
int arr3D[2][2][2];
printf("enter elements for 2D array:\n");
for(i=0;i<rows;i++)
{
for(j=0;j<cols;j++)
{
scanf("%d",&arr2D[i][j]);
}
}
printf("\n 2D array\n");
for(i=0;i<rows;i++)
{
for(j=0;j<cols;j++)
{
printf("%d",arr2D[i][j]);
}
printf("\n");
}
printf("\n enter the elements for 3D array:\n");
for(i=0;i<x;i++)
{
for(j=0;j<y;j++)
{
for(k=0;k<z;k++)
{
scanf("%d",&arr3D[i][j][k]);
}
}
}
printf("\n 3D array\n");
for(i=0;i<x;i++)
{
for(j=0;j<y;j++)
{
for(k=0;k<z;k++)
{
printf("%d",arr3D[i][j][k]);
}
printf("\n");
}
}
}










