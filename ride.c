/*
ID: cjpasti1
LANG: C
PROG: ride 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int getLetterIndex(char a){
    char alphabet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    for(int i = 0; i < 26; i++) {
        if(a == alphabet[i]) {
            return i + 1;
        }
    }
}

int getNameTotal(char sampleArray[]){
    int total = 1;
    for(int i = 0; i < strlen(sampleArray); i++) {
        total *= getLetterIndex(sampleArray[i]);
    }
    return total;
}

void main() {
    FILE *fin  = fopen ("ride.in", "r");
    FILE *fout = fopen ("ride.out", "w");

    int totalComet;
    int totalGroup;
    char cometName[8];
    char groupName[8];
    
    fscanf(fin, "%s\n%s", cometName, groupName);

    totalComet = getNameTotal(cometName);
    totalGroup = getNameTotal(groupName);

    if(totalComet % 47 == totalGroup % 47){
        fprintf(fout, "GO\n");
    } else {
        fprintf(fout, "STAY\n");
    }
    exit (0);
}
