void FUN0(char * data)
{
    {
        char source[10+1] = SRC_STRING;
<START>
        memmove(data, source, (strlen(source) + 1) * sizeof(char));
<END>
        printLine(data);
    }
}
void FUN1()
{
    char * data;
    char VAR0[10];
    char VAR1[10+1];
    data = VAR0;
    data[0] = '\0'; 
    FUN0(data);
}
