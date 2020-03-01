#include <stdio.h>
#include <stdlib.h>

#include "types.h"

typedef void (*Type)(int, int);

char* typesDesc[] = {
    "AND\0", 
    "OR\0", 
    "XOR\0",
    "IFJUST\0", 
    "IFJUSTIF\0"
};

//Better than (*typeDesc[])(int, int)
Type typesFuncPointer[] = {
    &and, 
    &or,
    &xor, 
    &ifJust,
    &ifJustIf
};

void trueTable(int value1, int value2);

int main(int argc, char const *argv[])
{
    int value1, value2;

    for(value1 = 0; value1 <= 1; value1++){
        for(value2 = 0; value2 <= 1; value2++){
            trueTable(value1, value2);
        }
    }
    return 0;
}

void trueTable(int value1, int value2){

}
