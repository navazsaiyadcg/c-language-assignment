#include<stdio.h>
int main()
{
int n;                                               
 scanf("%d",&n);                                     
                                             
                                    
                                              
                                   
 for(int i=0; i<n; i++){ 
   for(int k=0; k<n-i; k++){
        printf(" ");
   }
                                                  
      for(int j=0; j<2*i+1; j++){                                
          printf("%c",'A'+j);
           
      }
      printf("\n");
         
 
 
   
     
     
 
 }









    return 0;
}