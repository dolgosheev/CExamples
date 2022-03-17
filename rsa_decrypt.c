#include </opt/homebrew/include/gmp.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(void)
{
    
        mpz_t a,b,c;
        mpz_init(a);
        mpz_init(b);
        mpz_init(c);
        gmp_scanf("%Zd%Zd",a,b);
        mpz_add(c,a,b);
        gmp_printf("c= %Zd\n",c);
        return 0;
}