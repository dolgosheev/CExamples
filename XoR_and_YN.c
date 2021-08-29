#include <stdio.h>

main(int args,const char* argv[]){

    char answer = 'n';
    printf("Would you like to Hello ? (y/N)");
    scanf("%c",&answer);
    printf("Hello%s", answer == 'y' ? " , User" : "");

                        //00008421
    int a = 5;          //00000101
    int b = 9;          //00001001
    int res = a ^ b;    //00001100 = 12

    int tLeft = a >> 1; //00000010 2    
    int tRight = b << 1;//00010010 18
    printf("\n%d XOR %d = %d",a,b,res);
    printf("\n%d to left = %d",a,tLeft);
    printf("\n%d to right = %d",b,tRight);


    printf("\n");

    while(a<b){
        printf("\niteration increment %d %s", a++, a % 2 == 0 ? " and even":"");
    }

    getchar();
    return 0;
}