void FUN0(void * dataVoidPtr);
void FUN1()
{
    wchar_t * data;
    ; 
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    wchar_t * * dataPtr = (wchar_t * *)dataVoidPtr;
    wchar_t * data = (*dataPtr);
<START>
    printWLine(data);
<END>
}
