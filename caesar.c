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
        return 1;
    }
    key = atoi(argv[1]);
    text = GetString();
    for (int i = 1, l = strlen(text); i < l; i++)
    {
        if (isalpha(text[i]))
        {
            if (isupper(text[i]))
            {
                text[i] = ((text[i] - 'A' + key) % 26) + 'A';
            }
            else
            {
                text[i] = (text[i] - 'a' + key) % 26 + 'a';
            }
        }
        printf("%c",text[i]);
    }
    printf("/n");
    return 0;
}
