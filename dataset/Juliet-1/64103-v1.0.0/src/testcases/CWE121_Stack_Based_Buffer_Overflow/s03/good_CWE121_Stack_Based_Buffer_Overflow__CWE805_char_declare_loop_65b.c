void FUN0(char * data);
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    char VAR0[50];
    char VAR1[100];
    data = VAR1;
    data[0] = '\0'; 
    funcPtr(data);
}
void FUN0(char * data)
{
    {
        size_t i;
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        for (i = 0; i < 100; i++)
        {
            data[i] = source[i];
        }
        data[100-1] = '\0'; 
        printLine(data);
    }
}
