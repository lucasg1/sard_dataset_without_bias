void FUN0()
{
    int i;
    char * data;
    char VAR0[10];
    char VAR1[10+1];
    for(i = 0; i < 1; i++)
    {
        data = VAR0;
        data[0] = '\0'; 
    }
    {
        char source[10+1] = SRC_STRING;
<START>
        memcpy(data, source, (strlen(source) + 1) * sizeof(char));
<END>
        printLine(data);
    }
}
