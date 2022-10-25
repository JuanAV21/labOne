/*
 * Implement your solution in this file
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab1.h"

char* readString(char* fileName){
    char * str = malloc(MAX_LINE_LEN * sizeof(char));
    FILE *fptr = fopen(fileName, "r");
    fgets(str, MAX_LINE_LEN, (FILE*)fptr);
    fclose(fptr);
    return str;
}

char* mysteryExplode(const char * str){
    int len = strlen(str) - 1;
    int cnt = 0;
    char * cout;

    for(int i =0; i <= len ; ++i){
        cnt = cnt + i;
    }

    cout = malloc(cnt * sizeof(char) + 1);
    cnt = 0;
    for(int i=0;i<len;i++){

        for(int y=0;y<=i;y++){
            cout[cnt] = str[y];
            cnt += 1;

        }

    }
    return cout;
}

