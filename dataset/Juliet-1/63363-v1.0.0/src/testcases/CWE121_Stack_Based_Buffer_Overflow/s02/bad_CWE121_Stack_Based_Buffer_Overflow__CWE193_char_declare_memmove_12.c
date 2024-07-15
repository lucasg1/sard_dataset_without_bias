void FUN0()
{
    char * data;
    char VAR0[10];
    char VAR1[10+1];
    if(globalReturnsTrueOrFalse())
    {
        data = VAR0;
        data[0] = '\0'; 
    }
    else
    {
        data = VAR1;
        data[0] = '\0'; 
    }
    {
        char source[10+1] = SRC_STRING;
<START>
        memmove(data, source, (strlen(source) + 1) * sizeof(char));
<END>
        printLine(data);
    }
}
