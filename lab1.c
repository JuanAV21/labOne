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
    printf("1: %s", str);
    return str;
}

char* mysteryExplode(const char * str){
    int len = strlen(str) - 1;
    int cnt = 0;
    char * cout;
    printf("3: %s\n", str);
    printf("len %d\n", len);

    for(int i =0; i <= len ; ++i){
        cnt = cnt + i;
    }

    printf("Expected value 10\n");
    printf("Actual value: %d\n", cnt);
    printf("sizeof: %ld\n", sizeof(char));
    cout = malloc(cnt * sizeof(char) + 1);
    cnt = 0;
    for(int i=0;i<len;i++){

        for(int y=0;y<=i;y++){
            //cout += str.charat(y);
            cout[cnt] = str[y];
            printf("y: %d\n", y);
            cnt += 1;
            //printf("cout: %s\n", &str[y]);

        }

    }
    printf("cout: %s\n", cout);
    printf("str: %s", str);
    return cout;
}

