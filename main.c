#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    if(sayi>0){
        if(sayi%2==0&&sayi>0){
            printf("Girdiginiz sayi cift.");
        }
        else if(sayi%2==1){
            printf("Girdiginiz sayi tek.");
        }
    }
    else{
        if(sayi%2==0&&sayi<0){
            printf("Girdiginiz sayi cift.");
        }
        else if(sayi%2==-1){
            printf("Girdiginiz sayi tek.");
        }
        else if(sayi==0)
            printf("Girdiginiz sayi sifir.");
    }
    return 0;
}
