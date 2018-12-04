#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(int argc, string argv[])
{
    int Key = 0;
    string keycode = (argv[1]);
    int keyslength = strlen(keycode);
    string messager = get_string("plaintext: ");
    // since this is a command line prompt, it will get user plaintext as the input


    if (argc != 2)
        // Runs the first loop where if the arguement count is not equal to 2 then it will return an error
    {
        // if nothing is called with the file itself, it will put this out and break the start of the loop
        printf("Usage: ./vigenere k\n");
        return 1;
    }

    for (int j = 0; j < keyslength; j++)
        if (!isalpha(keycode[j]))
        {
            printf("Keys only accept letters. Use a valid key value\n!");
            return 1;
        }

    printf("ciphertext: ");
    // prints out ciphertext at the start of each responce


    for (int i = 0; i < strlen(messager); i++)
        // runs the loop in which uses isalpha
    {

        // if (isalpha(messager[i]))
        //     // if isalpha is true, it will return the character depending whether it's lowercase or uppercase
        // {

        if (isupper(messager[i]))
            // encodes the character if it's uppercase
            // takes the character once it ran through isAlpha, converts it to a 0-26 alpha index and adds the key value

        {
            printf("%c", (((messager[i] - 'A') + Key) % 26) + 'A');
            // Modulo is the most efficent since it allows it to go from Z to A
            Key = (Key + 1) % keyslength;
        }
        else if (islower(messager[i]))
            // encodes the character if it's lowercase

        {
            ("%c", (((messager[i] - 'a') + Key) % 26) + 'a');
// or z to a, we add the Ascii which grabs the characters and encodes it into text
            Key = (Key + 1) % keyslength;
        }
        else
        {
            printf("%c", messager[i]);
        }
    }
    // }
    printf("\n");
// if it is it encode it into cipher-text using 'specific passcode'
    return 0;
}