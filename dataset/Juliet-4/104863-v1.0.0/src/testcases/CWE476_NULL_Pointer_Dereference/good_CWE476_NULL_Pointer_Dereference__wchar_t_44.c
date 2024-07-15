void FUN0(wchar_t * data)
{
    printWcharLine(data[0]);
}
void FUN1()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = FUN0;
    data = L"Good";
    funcPtr(data);
}
void FUN2(wchar_t * data)
{
    if (data != NULL)
    {
        printWcharLine(data[0]);
    }
    else
    {
        printLine("data is NULL");
    }
}
void FUN3()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = FUN2;
    data = NULL;
    funcPtr(data);
}
