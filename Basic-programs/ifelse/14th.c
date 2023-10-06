#include<stdio.h>
int main(){
    char arr[5];
    printf("Enter a charecter:");
    for(int i = 0; i <5; i++)
    {
      scanf("%c",&arr[i]);
    }
    return  0;
 }


// (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') ? printf("It is ALPHABET")  : printf("It is NOT ALPHABET");
    
// if (ch>= 'a' && ch<= 'z' ){
//     printf("It is ALPHABET");
//     printf("\nthe char is in lower case");
// }
//    else if (ch>= 'A' && ch<= 'Z')
//     {
//         printf("It is ALPHABET");
//     printf("\nThe char is in UPPER CASE");
//     }
//     else{
//         printf("It is NOT ALPHABET");
//     }
// if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
// {
//     printf("It is ALPHABET");
//     printf("\n'%c' is Vowel.", ch);
// }
// else if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
//   {
//     printf("It is ALPHABET");
//     printf("\n'%c' is consonant", ch);
//   }
// else if(ch >= '0' && ch <= '9')
//        {
//         printf("It is  NOT ALPHABET");
//         printf("\n'%c' is a digit",ch);
//        }
//        else {
//           printf("\n'%c' is special character.", ch);
//        }
//     return  0;
// }




