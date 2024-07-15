void FUN0(wchar_t * data)
{
    printWcharLine(data[0]);
}
void FUN1()
{
    wchar_t * data;
    data = L"Good";
    FUN0(data);
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
    data = NULL;
    FUN2(data);
}
