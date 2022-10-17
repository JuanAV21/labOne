/*
 * Implement your solution in this file
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readString(char* fileName){
    char * str;
    FILE *fopen(const char* fileName, "r");
    fgets(str, 100, (FILE*)fopen);
    return str;
}

char* mysteryExplode(const char* str){
    int * len = strlen(str);
    int * cnt = 0;
    char * cout;

    for(int i =0;i =<len;++i){
        cnt += i;
    }

    cout = malloc(cnt * sizeof(char))

    for(int i=0;i<len;i++){

        for(int y=0;y<i;y++){
            cout += str.charat(y);
        }

    }

    return cout;
}

