            ******************************* Algorithm: ********************************
      Tower_Of_hanoi (disc,source,destination,spare)
         1. if disc==1
         2 . move disc from source to destination
         3. else:
         4.Tower_Of_hanoi(disc-1,source,space,destination)
         5. move disc from source to destination
         6. Tower_Of_hanoi(disc-1,spare,destination,source)
                       ********************** Program*************************
    #include<stdio.h>
      long int static count=0;
      void TOH(int n,char A,char B,char C)
     {
      if(n==1)
   {
      count++;
      printf("\nMove %c to %c",A,B);
      count++;
   }
      else
     {
      TOH(n-1,A,C,B);
      count++;
      printf("\nMove %c to %c",A,B);
      count++;
      TOH(n-1,C,B,A);
      count++;
   }
     }
       int main()
      {
     int n = 0;
     char A='A',B='B',C='C';
     printf("Enter the number of disc:");
     scanf("%d",&n);
     TOH(n,A,B,C);
     printf("\nFor n=%d no. of counts are=%ld",n,count);
     printf("\n");
     return 0;
    }
