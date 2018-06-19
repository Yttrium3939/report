#include<stdio.h>
#include<math.h>
#define N 50
int  main(void){
  double sum;
  double combination;
  double result[N];
  int i, j, k;
  for(i = 1; i <= N; i++){
    sum = 0;
    for(j = 1; j <= i; j++){
      combination = 1.0;
      for(k = 0; k < j; k++){
	combination *= (i-k)/(k+1.0);                                      //iCjの計算
      }
      sum += combination*pow( (1.0/(i)) , j )*pow((1.0-(1.0/(i))),i-j);    //各項の和を計算
    }
    result[i] = sum;
    printf("Throughout[N = %02d] = %.5f\n",i, result[i]);
  }
  return 0;
}
