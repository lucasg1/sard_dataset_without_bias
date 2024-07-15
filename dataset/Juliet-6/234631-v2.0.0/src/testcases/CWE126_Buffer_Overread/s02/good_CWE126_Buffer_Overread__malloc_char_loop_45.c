static char * VAR0;
static char * VAR1;
void FUN0()
{
    char * data = VAR1;
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
void FUN1()
{
    char * data;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
    VAR1 = data;
    FUN0();
}
