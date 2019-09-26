#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
void main()
{
    int b,k,c,p;
    char a[1000];
    printf("\tWelcome to Affine Cryptography\n");
    printf("Enter the value of first addend: ");
    scanf("%d",&a);
    printf("Enter the magnitude of shifting: ");
    scanf("%d", &k);
    printf("Enter the message you want to encrypt:\n");
    fflush(stdin);
    gets(a);
    printf("The encrypted message is:\n");
    int i;
    for(i=0;i<strlen(a);i++){
        if(a[i]>='A' && a[i]<='Z'){
            p=a[i]-'A';
            p=(b*p+k)%26;
            printf("%c",p+'A');
        }
        else if(a[i]>='a' && a[i]<='z'){
            p=a[i]-'a';
            p=(b*p+k)%26;
            printf("%c",p+'a');
        }
        else
            printf("%c",a[i]);
    }
    printf("\n");
    return 0;
}
