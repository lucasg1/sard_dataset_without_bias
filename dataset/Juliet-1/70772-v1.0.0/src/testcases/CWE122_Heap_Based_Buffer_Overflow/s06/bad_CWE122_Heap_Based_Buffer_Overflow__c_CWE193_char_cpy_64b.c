void FUN0(void * dataVoidPtr);
void FUN1()
{
    char * data;
    data = NULL;
    data = (char *)malloc(10*sizeof(char));
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    char * * dataPtr = (char * *)dataVoidPtr;
    char * data = (*dataPtr);
    {
        char source[10+1] = SRC_STRING;
<START>
        strcpy(data, source);
<END>
        printLine(data);
        free(data);
    }
}
