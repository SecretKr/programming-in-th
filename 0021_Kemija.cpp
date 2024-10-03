#include <stdio.h>
#include <string.h>

int main()
{
    int i,c = 0;
    char a[100],b[100];

    gets(a);
    for(i = 0;i < strlen(a);i++){
        if(a[i] == '105'){
            printf("yes");
            if(a[i+1] == '112')
                if(a[i+2] == '105'){
                    b[i] = '105';
                    c += 2;}}
        else{
            b[i] = a[i+c];
        }
    }
    for(i = 0;i < strlen(b);i++)
        printf("%c",b[i]);
}
