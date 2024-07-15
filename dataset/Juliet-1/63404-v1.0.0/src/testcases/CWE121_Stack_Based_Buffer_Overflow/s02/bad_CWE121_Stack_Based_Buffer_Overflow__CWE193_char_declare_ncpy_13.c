void FUN0()
{
    char * data;
    char VAR0[10];
    char VAR1[10+1];
    if(GLOBAL_CONST_FIVE==5)
    {
        data = VAR0;
        data[0] = '\0'; 
    }
    {
        char source[10+1] = SRC_STRING;
<START>
        strncpy(data, source, strlen(source) + 1);
<END>
        printLine(data);
    }
}
