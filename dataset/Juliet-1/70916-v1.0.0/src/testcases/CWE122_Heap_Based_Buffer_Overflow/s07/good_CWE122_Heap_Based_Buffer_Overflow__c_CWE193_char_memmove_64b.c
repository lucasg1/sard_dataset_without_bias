void FUN0(void * dataVoidPtr);
void FUN1()
{
    char * data;
    data = NULL;
    data = (char *)malloc((10+1)*sizeof(char));
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    char * * dataPtr = (char * *)dataVoidPtr;
    char * data = (*dataPtr);
    {
        char source[10+1] = SRC_STRING;
        memmove(data, source, (strlen(source) + 1) * sizeof(char));
        printLine(data);
        free(data);
    }
}
