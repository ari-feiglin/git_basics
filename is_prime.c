#include <stdio.h>
#include <stdlib.h>

int check_prime(int num){
    int is_prime = 1;
    int i = 0;

    for(i=2; i <= num/2; i++){
        if(num % i == 0){
            is_prime = 0;
            break;
        }
    }

    return is_prime;
}

int main(int argc, char ** argv){
    int i = 0;
    int num = 0;
    int is_prime = 0;

    if(argc < 2){
        printf("Usage: %s: <number> ...\n", argv[0]);
        goto cleanup;
    }

    for(i=1; i<argc; i++){
        num = atoi(argv[i]);
        is_prime = check_prime(num);

        if(1 == is_prime){
            printf("%i is prime\n", num);
        }
        else{
            printf("%i is not prime\n", num);
        }
    }

cleanup:
    exit(0);
}
