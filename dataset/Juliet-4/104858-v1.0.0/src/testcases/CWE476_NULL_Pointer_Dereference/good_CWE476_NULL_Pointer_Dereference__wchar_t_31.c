void FUN0()
{
    wchar_t * data;
    data = L"Good";
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
        printWcharLine(data[0]);
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
        if (data != NULL)
        {
            printWcharLine(data[0]);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
