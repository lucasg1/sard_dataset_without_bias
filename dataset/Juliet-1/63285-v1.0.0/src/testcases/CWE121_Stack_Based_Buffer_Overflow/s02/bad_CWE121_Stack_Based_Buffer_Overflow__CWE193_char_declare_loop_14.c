void FUN0()
{
    char * data;
    char VAR0[10];
    char VAR1[10+1];
    if(globalFive==5)
    {
        data = VAR0;
        data[0] = '\0'; 
    }
    {
        char source[10+1] = SRC_STRING;
        size_t i, sourceLen;
        sourceLen = strlen(source);
        for (i = 0; i < sourceLen + 1; i++)
        {
<START>
            data[i] = source[i];
<END>
        }
        printLine(data);
    }
}
