#include <stdio.h>
#include <string.h>

int check1 = 0;
int check2 = 0;

int getLetterIndex(char* a){
    char alphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    for(int i = 0; i < 26; i++) {
        if(*a == alphabet[i]) {
            return i + 1;
        }
    }
}

int checkLetterIndex(char a[], char b []){
    if(strlen(a) != strlen(b)){
        check1 += 1;
    }
    for(int i = 0; i < strlen(a); i++){
        if(a[i] == b[i]){
            check1 += 0;
        }else if (a[i] == b[i] - 10 || a[i] == b[i] - 9 || a[i] == b[i] - 8 || a[i] == b[i] - 1 || a[i] == b[i] || a[i] == b[i] + 1 || a[i] == b[i] + 8 || a[i] == b[i] + 9 || a[i] == b[i] + 10){
            check1 += 1;
            check2 += 0;
        } else{
            check1 += 1;
            check2 += 1;
        }
    }
}

int main(){
char word1[21];
char word2[21];
int word1Index;
int word2Index;



scanf("%s %s", word1, word2);
//check1 = strcmp(word1,word2);

word1Index = getLetterIndex(word1);
word2Index = getLetterIndex(word2);
checkLetterIndex(word1, word2);

//printf("%d", getLetterIndex(word1));
//printf("%d", getLetterIndex(word2));

if(check1 == 0){
    printf("1");
} else if(strlen(word1) != strlen(word2)){
    printf("3");
} else if(check2 == 0) {
    printf("2");
} else {
    printf("3");
}


return 0;
} 