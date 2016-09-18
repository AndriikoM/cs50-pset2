#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
 
int main(int argc, string argv[])
{
    int shift;
    int KeyValue;
 
    if (argc != 2)
    {
        printf("The key is missing or incorrectly.\n");
        return 1;
    }
 
    string key = argv[1]; 
 
    for (int n = 0, keylength = strlen(argv[1]); n < keylength; n++)
    {
        if ((key[n] >= '0') && (key[n] <= '9'))
        {
            printf("You entered the key not only with letters.\n");
            return 1;
        }
    }
 
    string Text = GetString();   
 
    for(int i = 0, j = 0, length = strlen(Text); i < length; i++, j++)
    {
        
        if (j >= strlen(key))
        {
            j = 0;
        }
 
        KeyValue = key[j]; 
 
        if (isalpha(Text[i]))
        {
            j = (j - 1);
        }  
 
        if ((KeyValue >= 'A') && (KeyValue <=  'Z'))
        {
            KeyValue = (KeyValue -  'A');
        }
 
        if ((KeyValue >= 'a') && (KeyValue <= 'z'))
        {
            KeyValue = (KeyValue - 'a');
        }
 
        shift = (Text[i] + KeyValue);
 
        if (isupper(Text[i]) && (shift > 'Z'))
        {
            shift = (shift - 26);
        }
 
        if (islower(Text[i]) && (shift > 'z'))
        {
            shift = (shift - 26);
        }
 
        if (isalpha(Text[i]))
        {
            printf("%c", shift);
        }
 
        else
        {
            printf("%c", Text[i]);
        }
 
    }  
    printf("\n");
    return 0;
}