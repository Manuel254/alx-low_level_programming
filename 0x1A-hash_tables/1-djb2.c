/**
 * hash_djb2 - hash function that generates an index from a key
 * @str: string to be hashed
 *
 * Return: A hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int c;

    hash = 5381;
    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }
    return (hash);
}
