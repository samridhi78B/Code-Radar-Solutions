#include <stdio.h>
int main() {
  int c, s;
  scanf("%d %d", &c, &s);
  if(c > s){
    printf("Loss");
  }
  else if( s> c){
    printf("Profit");
  }
  else{
    printf("No Profit No Loss");
  }
    return 0;
}