// Implements a dictionary's functionality

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <strings.h>
#include <stdlib.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

char word[LENGTH + 1];
unsigned int word_num = 0;

// TODO: Choose number of buckets in hash table
const unsigned int SIZE = 5000;

// Hash table
node *table[SIZE];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    int *pHash;
    unsigned int hashnumber = hash(word);
    if (table[hashnumber] == NULL)
    {
        return false;
    }
    
    if (strcasecmp(word, table[hashnumber]) == 0)
    {
        return true;
    }

    pHash = table[hashnumber]->next;


}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // Improve this hash function
    int sum = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {   
        sum += tolower(word[i]);
    }
    return sum % SIZE;
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    FILE *file = fopen(dictionary, "r");
    if (file == NULL)
    {
        printf("Could not open %s.\n", dictionary);
        return false;
    }

    unsigned int index;
     while(fscanf(file, "%s\n", word) != EOF)
    {
        node* tnode = malloc(sizeof(node));
        if (tnode == NULL)
        {
            return false;
        }

        //put the word in the node
        *tnode->word = malloc(strlen(word) + 1);
        strcpy(tnode->word, word);
        
        //hash the word and get the index
        index = hash(word);

        if (table[index] == NULL)
        {  
            table[index] = tnode;
            tnode->next = NULL;
        }

        else
        {
            tnode->next = table[index];
            table[index]->next = tnode;  
        }
        word_num++;
    }

    if (ferror(file))
    {
        fclose(file);
        printf("Error reading %s.\n", word);
        unload();
        return false;
    }

    fclose(file);
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    return word_num;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    return false;
}
