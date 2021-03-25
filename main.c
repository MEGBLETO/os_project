#include<stdio.h>
#include"myFunctions.h"







/******************************************************************************************/
int main(){
int* ptr = NULL; 


int choice, action;
 
do
{
 printf("Menu\n\n\n\n\n");
 printf("1. initMemory\n");
 printf("2. myalloc\n");
 printf("3. myfree\n");
 printf("4. freeMemory\n");
 printf("5. Exit\n");
 scanf("%d",&choice);
   
 switch (choice)
 {
     case 1: /*Ici c'est la function initMemory*/;
                      // This pointer will hold the 
                      // base address of the block created 
          
          int n; 
    // Get the number of elements for the array 
    printf("Enter number of elements:"); 
    scanf("%d",&n);
    initMemory(n);
          break;
          
     case 2: /*Call function here to do the required operation*/;
          printf("I'm myalloc\n\n");
          break; 
              
     case 3: /*Call function here to do the required operation*/
         printf("I'm myfree\n\n");
          break;
          
     case 4: /*Call function here to do the required operation*/
         printf("I'm freeMemory\n\n");
         freeMemory();
          break;   
           
     case 5: printf("Aurevoir\n"); 
         break;
         
     default: printf("Wrong Choice. Enter again\n");
                    break;
 } 




} while (choice != 5);


/******************************************************************************************************/



return 0;
}
