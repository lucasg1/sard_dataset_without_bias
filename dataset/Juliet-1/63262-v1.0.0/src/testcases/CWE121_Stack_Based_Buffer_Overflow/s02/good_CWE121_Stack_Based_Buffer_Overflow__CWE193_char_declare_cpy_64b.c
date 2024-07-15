void FUN0(void * dataVoidPtr);
void FUN1()
{
    char * data;
    char VAR0[10];
    char VAR1[10+1];
    data = VAR1;
    data[0] = '\0'; 
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    char * * dataPtr = (char * *)dataVoidPtr;
    char * data = (*dataPtr);
    {
        char source[10+1] = SRC_STRING;
        strcpy(data, source);
        printLine(data);
    }
}
