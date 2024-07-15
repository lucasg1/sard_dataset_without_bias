void FUN0()
{
    char * data;
    char VAR0[50];
    char VAR1[100];
    if(globalReturnsTrue())
    {
        data = VAR0;
        data[0] = '\0'; 
    }
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
<START>
        strcat(data, source);
<END>
        printLine(data);
    }
}
