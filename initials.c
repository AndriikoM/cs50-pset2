#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)  
{
    void initialize(string name);

    string name = GetString();

    if (name != NULL)
    {
        initialize(name);
    }

    return 0;
}

void initialize(string name)  
{
    int start = 0;

    while (name[start] == ' ')
    {
        start++;
    }
    printf("%c", toupper(name[start]));
   for (int i = start + 1, n = strlen(name); i < n; i++)
    {
        // Get Letter after space
        while (name[i] == ' ')
        {
            i++;
            if (i < n && name[i] != ' ')
            {
                printf("%c", toupper(name[i]));
            }
        }   
    }
    printf("\n");
}