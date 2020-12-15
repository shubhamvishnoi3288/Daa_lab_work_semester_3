#include<stdio.h>
#include<stdlib.h>
void main(){
 int a[2][2], b[2][2], c[2][2], i, j;
 int p1, p2, p3, p4 , p5, p6, p7;
 printf("Enter the 4 elements of first matrix: ");
 for(i = 0;i < 2; i++)
 for(j = 0;j < 2; j++)
 scanf("%d", &a[i][j]);
 printf("Enter the 4 elements of second matrix: ");
 for(i = 0; i < 2; i++)
 for(j = 0;j < 2; j++)
 scanf("%d", &b[i][j]);
 printf("\nThe first matrix is\n");
 for(i = 0; i < 2; i++){
 printf("\n");
 for(j = 0; j < 2; j++)
 printf("%d\t", a[i][j]);
 }
 printf("\nThe second matrix is\n");
 for(i = 0;i < 2; i++){
 printf("\n");
 for(j = 0;j < 2; j++)
 printf("%d\t", b[i][j]);
 }
 /* P1=a(f-h)
 p2=(a+b)h
 p3=(c+d)e
 p4=d(g-e)
 p5=(a+d)(e+h)
 p6=(b-d)(g+h)
 p7=(a-c)(e+f) */
 p1= a[0][0] * (b[0][1] - b[1][1]);
 p2= (a[0][0] + a[0][1]) * b[1][1];
 p3= (a[1][0] + a[1][1]) * b[0][0];
 p4= a[1][1] * (b[1][0] - b[0][0]);
 p5= (a[0][0] + a[1][1]) * (b[0][0] + b[1][1]);
 p6= (a[0][1] - a[1][1]) * (b[1][0]+b[1][1]);
 p7= (a[1][0] - a[0][0]) * (b[0][0]+b[0][1]);
 c[0][0] = p5 + p4- p2 + p6;
 c[0][1] = p1 + p2;
 c[1][0] = p3 + p4;
 c[1][1] = p1 + p5 - p3 - p7;
 printf("\nAfter multiplication using Strassen's algorithm \n");
 for(i = 0; i < 2 ; i++){
 printf("\n");
 for(j = 0;j < 2; j++)
 printf("%d\t", c[i][j]);
 }
}