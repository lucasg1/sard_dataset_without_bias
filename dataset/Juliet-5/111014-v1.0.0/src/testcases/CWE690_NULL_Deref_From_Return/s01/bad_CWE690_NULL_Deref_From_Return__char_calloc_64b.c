void FUN0(void * dataVoidPtr);
void FUN1()
{
    char * data;
    data = NULL; 
    data = (char *)calloc(20, sizeof(char));
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    char * * dataPtr = (char * *)dataVoidPtr;
    char * data = (*dataPtr);
<START>
    strcpy(data, "Initialize");
<END>
    printLine(data);
    free(data);
}
