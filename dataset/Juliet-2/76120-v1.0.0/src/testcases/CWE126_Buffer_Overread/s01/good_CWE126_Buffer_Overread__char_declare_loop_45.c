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
    }
}
void FUN1()
{
    char * data;
    char VAR2[50];
    char VAR3[100];
    memset(VAR2, 'A', 50-1); 
    VAR2[50-1] = '\0'; 
    memset(VAR3, 'A', 100-1); 
    VAR3[100-1] = '\0'; 
    data = VAR3;
    VAR1 = data;
    FUN0();
}
