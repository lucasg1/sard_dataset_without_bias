void FUN0(void * dataVoidPtr);
void FUN1()
{
    wchar_t * data;
    data = L"string";
    FUN0(&data);
}
void FUN2(void * dataVoidPtr);
void FUN3()
{
    wchar_t * data;
    ; 
    FUN2(&data);
}
void FUN0(void * dataVoidPtr)
{
    wchar_t * * dataPtr = (wchar_t * *)dataVoidPtr;
    wchar_t * data = (*dataPtr);
    printWLine(data);
}
void FUN2(void * dataVoidPtr)
{
    wchar_t * * dataPtr = (wchar_t * *)dataVoidPtr;
    wchar_t * data = (*dataPtr);
    data = L"string";
    printWLine(data);
}
