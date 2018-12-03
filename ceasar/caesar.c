#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(int argc, string argv[])
{
    int Key = 0;
    int IndexAlp = 0;

    if(argc == 2)
    {
        // turns the key input from a string to an integer
        Key = atoi(argv[1]);
}

// since this is a command line prompt, it will get user plaintext as the input
string messager = get_string("what's the password sir: ");
printf("%s\n", messager); // prints out the string

for (int i = 0; i < strlen(messager); i++) // runs the loop in which uses isalpha
{

    if (isalpha(messager[i]))
    {

        if(isupper(messager[i]))
        {
            printf("%c", (((messager[i] - 'A') + Key) % 26) + 'A');
        }
        else
        {
            printf("%c", (((messager[i] - 'a') + Key) % 26) + 'a');
        }
    }
    else {
        printf("USAGE: arguments suppose to be alphabetical only\n");
        return 1;
    }
}
printf("\n");
return 0;
}