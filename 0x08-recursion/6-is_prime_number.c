#include <stdio.h>
int is_prime_number(int n){
gets (n);
int flag = 0;
for (int i = 2; i <= n/2; i++ ){
if (n % i==0){
flag = 1;
break;
}
}
if (n == 1){
printf(" Not Prime");
}else{
if (flag == 0){
printf("Prime\n");
}else{
printf("Not Prime\n");
} 
}
return 0;
}
