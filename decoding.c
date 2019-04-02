#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//decoding function prototype
char decrypt(char *phrase);

int main()
{
    //introducing variables
    char encoded; 
    char phrase[1024]; 
    int key;
    
    //getting the phrase
    printf("enter a phrase to decode: \n");     //prompts phrase to be put in by user
    scanf("%s", phrase);                        //scans the phrase from the user
    
    //allows user to choose a shifting value, the 'key'
    printf("enter the key it was shifted by: \n");
    scanf("%d", &key);
        
    //encrypting and printing the encrypted phrase
    printf("the decryption is:\n");
    decrypt(phrase);    //decoding function
    printf(" \n");      //gives new line afterwards    
    return 0;
}

//decoding function definition
char decrypt(char *phrase)
{
    char i=0;
    int key; //11 is the max to add, before characters are used instead of letters
    while(phrase[i] != NULL)
    {
        phrase[i]=phrase[i]-key;    //shifts it backwards
        printf("%c", phrase[i]);    //prints each decrypted letter
        i++;
    }
}
