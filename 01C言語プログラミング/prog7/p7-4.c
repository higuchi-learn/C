/* p7-4.c */ 
#include<stdio.h>

int main(){
  char id[10]="v12345vv";
  int i=0;

  while(id[i]){
    if ( 'a'<= id[i] && id[i]<='z' ){
    	id[i] += 'A'-'a';
    }
    i++;
  }
  printf("%s\n", id);
  
  return 0;
}
