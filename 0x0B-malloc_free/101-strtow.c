#include "main.h"
#include <stdlib.h>
#include <string.h>

/*
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to string or NULL
 */

char **strtow(char *str)
{
        int cnt = 0;
        int wrd = 0;
        int i, j, Len;
        char **word;

        if (str == NULL || *str == '\0')
        {
                return NULL;
        }

        // Count the number of words in the string
        for (i = 0; str[i] != '\0'; i++)
        {
                if (str[i] == ' ')
                {
                        wrd = 0;
                }
                else if (wrd == 0)
                {
                        wrd = 1;
                        cnt++;
                }
        }

        wors = (char **)malloc((cnt + 1) * sizeof(char *));
        if (word == NULL)
        {
                return NULL;
        }

        wrd = 0;
        Len = 0;
        j = 0;
        for (i = 0; str[i] != '\0'; i++)
        {
                if (str[i] == ' ')
                {
                        if (wrd)
                        {
                                word[j] = (char *)malloc((Len + 1) * sizeof(char));
                                if (word[j] == NULL)
                                {
                                        // Free memory if allocation fails
                                        for (int i = 0; i < j; i++)
                                        {
                                                free(word[i]);
                                        }
                                        free(word);
                                        return NULL;
                                }
                                strncpy(words[y], &str[x - wordLen], wordLen);
                                words[y][wordLen] = '\0';
                                y++;
                                word = 0;
                                wordLen = 0;
                        }
                }
                else
                {
                        word = 1;
                        wordLen++;
                }
        }

        if (word)
        {
                words[y] = (char *)malloc((wordLen + 1) * sizeof(char));
                if (words[y] == NULL)
                {
                        // Free memory if allocation fails
                        for (int i = 0; i <= y; i++)
                        {
                                free(words[i]);
                        }
                        free(words);
                        return NULL;
                }
                strncpy(words[y], &str[x - wordLen], wordLen);
                words[y][wordLen] = '\0';
                y++;
        }

        words[y] = NULL;

        return words;
}
