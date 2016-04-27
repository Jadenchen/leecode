#include <stdio.h>
#include <string.h>


char* reverseString(char* s) {


    char tmp;
    int i, j;
    int len;
    char *result = s;
    len = strlen(s);

    // for (i = 0, j = len -1; i < j; i++,j--){
    //     tmp = *(s+i);
    //     *(s+i) = *(s+j);
    //     *(s+j) = tmp;
    // }
    
     for (i = 0; i < len/2 ; i++){
        tmp = *(s+i);
        *(s+i) = *(s+len-1-i);
        *(s+len-1-i) = tmp;
    }

    return result;
}

// void reverse (char s[])
// {

//     int i , j;
//     int len = strlen (s);
//     char tmp;
//     for (i = 0, j = len - 1; i< j; i++, j--){
//         tmp = s[i];
//         s[i] = s[j];
//         s[j] = tmp;
//     }

//     printf("%s\n", s);
// }

int main (void)
{
    char s[] = "hello";
    char *p;
    p = reverseString (s);
    
    for (; *p != '\0';p++){
        printf ("%c ",*p);
    }

    printf ("\n");
    //reverse(s);
    return 0;
}

