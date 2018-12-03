#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(int argc, string argv[])
{
    int Key = 0;
    int IndexAlp = 0;
    string messager = get_string("plaintext: ");
    // since this is a command line prompt, it will get user plaintext as the input


    if (argc == 2)
    {
        // turns the key input from a string to an integer
        Key = atoi(argv[1]);



        printf("ciphertext: "); // prints out the string

        for (int i = 0; i < strlen(messager); i++) // runs the loop in which uses isalpha
        {

            if (isalpha(messager[i]))
                // if isalpha is true, it will return the character depending whether it's lowercase or uppercase
            {

                if (isupper(messager[i]))
                    // encodes the character if it's uppercase
                    // takes the character once it ran through isAlpha, converts it to a 0-26 alpha index and adds the key value
                {
                    printf("%c", (((messager[i] - 'A') + Key) % 26) + 'A');
                    // Modulo is the most efficent since it allows it to go from Z to A
                }
                else if (islower(messager[i]))
                    // encodes the character if it's lowercase
                {
                    printf("%c", (((messager[i] - 'a') + Key) % 26) + 'a');
                    // or z to a, we add the Ascii which grabs the characters and encodes it into text
                }
            }
            else
            {
                printf("USAGE: arguments suppose to be alphabetical only\n");
                // if the character is not alpha it will return the character as is
                return 1;
            }
        }
        printf("\n");
// if it is it encode it into cipher-text using 'specific passcode'
        return 0;
    }
}