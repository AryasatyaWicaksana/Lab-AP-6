#include<stdio.h>

int main(){
    int nim; 
    char kom;
    float ip; 
    char nama[50];

    printf("Hello World\n");
    printf("Masukkan nama : ");
    gets (nama); 


    printf("Masukkan NIM : ");
    scanf("%d",&nim);

    printf("Masukkan KOM :");
    scanf(" %c",&kom);

    printf("Masukkan IP : ");
    scanf("%f",&ip);

    
    printf("NAMA : \n");
    puts(nama); 
    printf("NIM : %d \n", nim);
    printf("KOM : %c \n", kom);
    printf("IP : %.2f \n", ip); 
    return 0;
}
