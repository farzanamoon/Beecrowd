#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[20];
    printf("Enter the main string: ");
    gets(str1);

    printf("Enter the string to delete: ");
    gets(str2);
     char *pos= strstr(str1,str2);
     if(pos !=NULL){
        int len= strlen(str2);

        while (*pos !='\0'){
            *pos=*(pos+len);
            pos++;
        }
        printf("string after deletation: %s\n",str1);
     }
     else {
        printf("string not found.\n");
     }
    return 0;
}
