void FUN0()
{
    char * data;
    char VAR0[50];
    char VAR1[100];
    data = VAR0;
    data[0] = '\0'; 
    {
        char * dataCopy = data;
        char * data = dataCopy;
        {
            char source[100];
            memset(source, 'C', 100-1); 
            source[100-1] = '\0'; 
<START>
            SNPRINTF(data, 100, "%s", source);
<END>
            printLine(data);
        }
    }
}
