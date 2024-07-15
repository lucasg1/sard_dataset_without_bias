void FUN0(void * dataVoidPtr);
void FUN1()
{
    char * data;
    data = NULL; 
    data = (char *)realloc(data, 20*sizeof(char));
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    char * * dataPtr = (char * *)dataVoidPtr;
    char * data = (*dataPtr);
    if (data != NULL)
    {
        strcpy(data, "Initialize");
        printLine(data);
        free(data);
    }
}
