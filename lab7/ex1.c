#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>

int main(int argc,char*argv[]){
    int a[100];
    int i = 1;
    int j = 0;
    int s = 0;
    int t = 0;
    int temp;
    for(i = 1;i < argc;i++,j++){
        a[j] = atof(argv[i]);
    }
    for(s = 0;s < argc-2;s++){
     if(a[s] < a[s+1])
{
temp = a[s];
a[s] = a[s+1];
a[s+1 ]= temp;
    }
}
printf("The minimum is：%d\n",a[argc-2]);
return 0;
}