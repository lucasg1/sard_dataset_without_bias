void FUN0(char * data)
{
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        strcpy(data, source);
        printLine(data);
    }
}
void FUN1()
{
    char * data;
    char VAR0[50];
    char VAR1[100];
<START>
    data = VAR0;
<END>
    data[0] = '\0'; 
    FUN0(data);
}
