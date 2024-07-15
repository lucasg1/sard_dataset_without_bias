void FUN0(void * dataVoidPtr);
void FUN1()
{
    char * data;
    ; 
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    char * * dataPtr = (char * *)dataVoidPtr;
    char * data = (*dataPtr);
<START>
    printLine(data);
<END>
}
