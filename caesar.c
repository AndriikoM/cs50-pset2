#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    int key;
    string text;
     if (argc !=2)
    {
        printf("You didn`t enter key. \n ");
        return 0;
    }
    key = atoi(argv[1]);
    text = GetString();
    for (int i = 0, l = strlen(text); i < l; i++)
    {
        if (isalpha(text[i]))
        {
            if (isupper(text[i]))
            {
                // 
                text[i] = (text[i] - 'A' + key) % 26;
                // 
               text[i] = text[i] + 'A';
            }
            else
            {
                // 
                text[i] = (text[i] - 'a' + key) % 26;
                // 
               text[i] = text[i] + 'a';
            }
        }
        printf("%c",text[i]);
    }
}