#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{   int i;
    //counting the words in the String
//    int space=0;
//    char s[200];//="how are you";
//    printf("Enter the String : ");
//    scanf("%[^\n]s",s);
//    for(i=0;s[i]!='\0';i++)
//    {
//        if(s[i]==' ' && s[i-1]!=' ')
//        {
//            space++;
//        }
//    }
//    printf("The number of words are %d\n",space+1);
//    printf("%s\n",s);
    
    
    
    //converting lower into higer simul..
    char s[200];
    printf("Enter the String :");
    scanf("%[^\n]s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            s[i]=s[i]+32;
        }
        else if(s[i]>=97 && s[i]<=122)
        {
            s[i]=s[i]-32;
        }
    }
    printf("%s\n",s);
    return 0;
}
