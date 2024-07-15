void FUN0()
{
    char * data;
    char VAR0[50];
    char VAR1[100];
    while(1)
    {
        data = VAR0;
        data[0] = '\0'; 
        break;
    }
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
<START>
        strncpy(data, source, 100-1);
<END>
        data[100-1] = '\0'; 
        printLine(data);
    }
}
