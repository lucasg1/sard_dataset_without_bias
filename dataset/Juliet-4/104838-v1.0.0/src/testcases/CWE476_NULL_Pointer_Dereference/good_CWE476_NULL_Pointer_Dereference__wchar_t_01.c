void FUN0()
{
    wchar_t * data;
    data = L"Good";
    printWcharLine(data[0]);
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    if (data != NULL)
    {
        printWcharLine(data[0]);
    }
    else
    {
        printLine("data is NULL");
    }
}
