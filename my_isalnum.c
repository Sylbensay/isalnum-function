#include <stdio.h>

int my_isalnum (char num){
    if (num > 64 && num < 91 || num > 96 && num <123 || num > 47 && num < 58){
        return 1;

    }
    else {
        return 0;
    } 


}
