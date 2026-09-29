#include <stdio.h>
int main(void) {
  int numberL;
  int numberR;
  scanf("%d %d", &numberL, &numberR);
  int numberX = 0;
  int divisorK = 0;

  for(int i = numberL; i <= numberR; i++){
    int count = 0;

    for(int n = 1; n <= i; n++ ){
      if(i%n == 0){
        count ++;
      }
    }

    if(count >= divisorK){
      numberX = i;
      divisorK = count; 
    }

  }

  printf("Number: %d\n",  numberX);
  printf("Divisors: %d\n",  divisorK);

  return 0;
}  