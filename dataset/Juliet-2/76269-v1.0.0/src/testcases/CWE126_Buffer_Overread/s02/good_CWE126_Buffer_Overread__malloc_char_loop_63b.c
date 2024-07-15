void FUN0(char * * data);
void FUN1()
{
    char * data;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
    FUN0(&data);
}
void FUN0(char * * dataPtr)
{
    char * data = *dataPtr;
    {
        size_t i, destLen;
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; 
        destLen = strlen(dest);
        for (i = 0; i < destLen; i++)
        {
            dest[i] = data[i];
        }
        dest[100-1] = '\0';
        printLine(dest);
        free(data);
    }
}
