void FUN0(char * * dataPtr);
void FUN1()
{
    char * data;
    data = NULL;
    data = (char *)malloc(10*sizeof(char));
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
        free(data);
    }
}
