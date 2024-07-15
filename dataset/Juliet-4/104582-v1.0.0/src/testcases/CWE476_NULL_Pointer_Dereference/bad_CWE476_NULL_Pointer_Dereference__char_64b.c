void FUN0(void * dataVoidPtr);
void FUN1()
{
    char * data;
    data = NULL;
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    char * * dataPtr = (char * *)dataVoidPtr;
    char * data = (*dataPtr);
<START>
    printHexCharLine(data[0]);
<END>
}
