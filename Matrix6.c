#include<stdio.h>         //tri-diagonal sparse matrix
void main() 
{ 
  int a[4][4] ,i ,j ;
printf("enter matrix :\n");
for(i=0;i<4;i++) 
 {  
   for(j=0;j<4;j++) 
     {   scanf("%d", &a[i][j] );
            
            
     }   
 }

printf("tri-diagonal sparse matrix is :\n");
for(i=0;i<4;i++) 
 {  
   for(j=0;j<4;j++) 
    {    
       if (  i != j || i!= ( j+1 ) ||  i!= ( j+1 )  )    
          { 
           a[i][j]=0;                          
          }
       printf("%d", a[i][j] );                      
    }
    printf("\n");                                    
  }
}
