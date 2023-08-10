#include <stdio.h>
void checKPrime(int n)
{
    if(n % 2 == 0)
    {
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
}
int main(){
    int n = 51;
    checKPrime(n);
    return 0 ;
}