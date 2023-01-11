#include <stdio.h>

int main()
{
    float a, b;
  
    printf("Geben Sie die erste Zahl ein\n");
    scanf("%f", &a);
    printf("Geben Sie die zweite Zahl ein\n");
    scanf("%f", &b);
  
    if(a<b){
        printf("Die erste Zahl ist kleiner als die zweite.\n");
        }
    if(a>b){
        printf("Die erste Zahl ist größer als die zweite.\n");
        }
    if(a==b){
        printf("Die erste und zweite Zahl sind identisch.\n");
        }
}
