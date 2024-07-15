void FUN0(wchar_t * * data);
void FUN1()
{
    wchar_t * data;
    data = L"string";
    FUN0(&data);
}
void FUN2(wchar_t * * data);
void FUN3()
{
    wchar_t * data;
    ; 
    FUN2(&data);
}
void FUN0(wchar_t * * dataPtr)
{
    wchar_t * data = *dataPtr;
    printWLine(data);
}
void FUN2(wchar_t * * dataPtr)
{
    wchar_t * data = *dataPtr;
    data = L"string";
    printWLine(data);
}
