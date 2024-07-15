void FUN0(char * data)
{
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        strncat(data, source, 100);
        printLine(data);
    }
}
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    char VAR0[50];
    char VAR1[100];
<START>
    data = VAR0;
<END>
    data[0] = '\0'; 
    funcPtr(data);
}
