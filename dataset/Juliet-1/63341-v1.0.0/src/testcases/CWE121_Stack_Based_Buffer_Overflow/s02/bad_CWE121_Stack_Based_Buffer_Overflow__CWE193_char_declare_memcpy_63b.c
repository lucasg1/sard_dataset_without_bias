void FUN0(char * * dataPtr);
void FUN1()
{
    char * data;
    char VAR0[10];
    char VAR1[10+1];
    data = VAR0;
    data[0] = '\0'; 
    FUN0(&data);
}
void FUN0(char * * dataPtr)
{
    char * data = *dataPtr;
    {
        char source[10+1] = SRC_STRING;
<START>
        memcpy(data, source, (strlen(source) + 1) * sizeof(char));
<END>
        printLine(data);
    }
}
