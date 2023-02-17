#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "node.h"
#include "stack.h"
/*
void push(NodePtr* top,int x);
int pop(NodePtr* top);
*/



int main(int argc, char **argv){
  
  int i,N,j,error;
  Stack s;
  s.top=NULL;
  s.size=0;

  for(i=1;i<argc;i++){
    error=0;
    for(j=0;j<strlen(argv[i]);j++){
     switch(argv[i][j]){  
       case '{':
       case '[':  push(&s,argv[i][j]); break;
      
       case ']':  if(pop(&s)!='[')        
                      error=1; break;
       case '}':  if(pop(&s)!='{')        
                      error=1; break;
      }
      if(error==1) break;
    }
    if(s.size>0){
      printf("argv %d: Incorrect too many open parenthesis\n",i);
      pop_all(&s);
    }
    else if(error==0) printf("argv %d: Correct\n",i);
      else printf("argv %d : Incorrect\n",i);
  }

  //pop_all(&s);
  
  /*
  push(&top,5);
  printf("%d\n",pop(&top));
  push(&top,7);
  push(&top,8);
  printf("%d\n",pop(&top));
  printf("%d\n",pop(&top));
  printf("%d\n",pop(&top));
*/
 
 
  

 /*
 Stack s;
 printf("Checking the parentheses in argv arguments\n");
  for(i=1;i<argc;i++){
   
     for(j=0;j<strlen(argv[i]);j++){
       /* Use stack to help with the parentheses*/


    /* }*/


 /* } */




   return 0;
}
