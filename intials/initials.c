#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{

    string word = get_string();
    printf("%c", toupper(word[0])); // prints the first initial of the name uppercase, using the toupper
    for (int i = 0; i < strlen(word); i++)
        // this checks if the loop encounters a space, also if the index reaches the end of the string
    {
        if (word[i] == ' ')
        {
            printf("%c", toupper(word[i + 1])); // make the next character as an uppercase
        }
    }
    printf("\n");
}
