#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[1000];
    int i, words = 1;
    
    printf("Enter a sentence: ");
    fgets(sentence, 1000, stdin);
    
    for (i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] == ' ' || sentence[i] == '\n' || sentence[i] == '\t')
        {
            words++;
        }
    }
    
    printf("The number of words in the sentence is %d\n", words);
    
    return 0;
}
