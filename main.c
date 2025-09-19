// Online C compiler to run C program online
#include <stdio.h>

void main(){
    int a;
    printf("Enter water level of dam (in million cusecs)\n");
    scanf("%d",&a);
    if(a>=341){
        printf("Water level exceeded\n");
    }
    else{
        printf("Water level sufficient\n");
    }
}
