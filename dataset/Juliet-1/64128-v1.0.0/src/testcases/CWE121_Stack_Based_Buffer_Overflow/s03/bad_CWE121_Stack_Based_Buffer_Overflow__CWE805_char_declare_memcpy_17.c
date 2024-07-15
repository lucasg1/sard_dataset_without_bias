void FUN0()
{
    int i;
    char * data;
    char VAR0[50];
    char VAR1[100];
    for(i = 0; i < 1; i++)
    {
        data = VAR0;
        data[0] = '\0'; 
    }
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
<START>
        memcpy(data, source, 100*sizeof(char));
<END>
        data[100-1] = '\0'; 
        printLine(data);
    }
}
