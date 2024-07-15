void FUN0()
{
    char * data;
    char VAR0[50];
    char VAR1[100];
    memset(VAR0, 'A', 50-1); 
    VAR0[50-1] = '\0'; 
    memset(VAR1, 'A', 100-1); 
    VAR1[100-1] = '\0'; 
    if(1)
    {
        data = VAR0;
    }
    {
        size_t i, destLen;
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; 
        destLen = strlen(dest);
        for (i = 0; i < destLen; i++)
        {
<START>
            dest[i] = data[i];
<END>
        }
        dest[100-1] = '\0';
        printLine(dest);
    }
}
