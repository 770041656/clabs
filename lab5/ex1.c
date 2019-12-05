#include <stdio.h>
#include <string.h>

void rverse(char s[]){
    void reverser(char s[], int i, int len);

    reverser(s, 0, strlen(s)); 
}
void reverser(char s[], int i, int len){
    int c, j;
    j = len - (i + 1);
    if (i < j){
        c = s[i];
        s[i] = s[j];
        s[j] = c;
        reverser(s, ++i, len);
    }
}
int main(){
    char s;
    char t[1000];
    int i = 0;
    int k = 0;
    while((s = getchar()) != '\n'){
        t[i]=s;
        k=++i;
    }
    reverser(t,0,k);
    for(i=0;i<k;i++)
    printf("%c",t[i]);
}