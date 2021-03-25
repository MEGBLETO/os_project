#include<stdlib.h>
#include<stdio.h>

void* ptr = NULL; 

int initMemory(int nbytes){

    // Dynamically allocate memory using malloc() 
    ptr = (void*)malloc(nbytes * sizeof(int)); 
  
    // Check if the memory has been successfully 
    // allocated by malloc or not 
    if (ptr == NULL) { 
        printf("Memory not allocated.\n"); 
        exit(0); 
    } 
    else { 
  
        // Memory has been successfully allocated 
        printf(" %d  block of Memory successfully allocated using malloc.\n", nbytes); 
  
    }
  
    return 0; 
} 



/************************************myalloc Here*************************************/

void* myallloc(int nBytes){






}



/************************Free Memory ici*******************************/

int freeMemory(){

if(ptr == NULL){
printf("ERROR ERROR PAS DE BLOC MEMOIRE A SUPPRIMER\n\n");
}
else{
free(ptr);
ptr = 0;
printf("THE OPERATION WAS A SUCCESS\n");
}
  return 0;
}


