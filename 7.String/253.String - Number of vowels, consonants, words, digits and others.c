#include<stdio.h>
int main(){
    char s1[100], ch;
    int i, vowel, consonant, digit, word, others;

    printf("Enter a string: ");
    gets(s1);

    i=vowel=consonant=word=digit=others=0;

    while((ch=s1[i])!='\0'){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
           ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){//Checking vowel
            vowel++;
           }
        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){//checking consonant
            consonant++;
        }
        else if(ch>='0' && ch<='9'){
            digit++;
        }
        else if(ch==' '){
            word++;
        }
        else{
            others++;
        }

        i++;
    }
    word++;

    printf("Number of vowels: %d\n", vowel);
    printf("Number of consonant: %d\n", consonant);
    printf("Number of digit: %d\n", digit);
    printf("Number of word: %d\n", word);
    printf("Number of others: %d\n", others);


    getch();
}
