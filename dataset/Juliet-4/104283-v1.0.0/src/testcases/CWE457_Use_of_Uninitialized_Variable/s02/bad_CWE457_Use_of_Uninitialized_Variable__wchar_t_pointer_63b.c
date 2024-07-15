void FUN0(wchar_t * * dataPtr);
void FUN1()
{
    wchar_t * data;
    ; 
    FUN0(&data);
}
void FUN0(wchar_t * * dataPtr)
{
    wchar_t * data = *dataPtr;
<START>
    printWLine(data);
<END>
}
