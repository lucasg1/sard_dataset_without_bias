void FUN0(void * dataVoidPtr);
void FUN1()
{
    wchar_t * data;
    data = L"Good";
    FUN0(&data);
}
void FUN2(void * dataVoidPtr);
void FUN3()
{
    wchar_t * data;
    data = NULL;
    FUN2(&data);
}
void FUN0(void * dataVoidPtr)
{
    wchar_t * * dataPtr = (wchar_t * *)dataVoidPtr;
    wchar_t * data = (*dataPtr);
    printWcharLine(data[0]);
}
void FUN2(void * dataVoidPtr)
{
    wchar_t * * dataPtr = (wchar_t * *)dataVoidPtr;
    wchar_t * data = (*dataPtr);
    if (data != NULL)
    {
        printWcharLine(data[0]);
    }
    else
    {
        printLine("data is NULL");
    }
}
