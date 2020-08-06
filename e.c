#include<stdio.h>
#include<stdlib.h>



int main(){

  int i;
  int h = 0;
  int t = 0;
  int count = 0;
  
  for( i = 0 ; i < 3 ; i++ ){
    ++count;
    if( rand()%2 == 1){
      printf("Round %d :head\n",count);
      h++;
    }
    else{
      printf("Round %d :tail\n",count);
      t++;
    }
  }

  printf("頭: %d 尾: %d\n",h,t);
  return 0 ;
}
