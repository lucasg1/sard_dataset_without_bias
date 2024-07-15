void FUN0()
{
    wchar_t * data;
    if(globalReturnsTrueOrFalse())
    {
        data = NULL;
    }
    else
    {
        data = NULL;
    }
    if(globalReturnsTrueOrFalse())
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
    else
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
}
void FUN1()
{
    wchar_t * data;
    if(globalReturnsTrueOrFalse())
    {
        data = L"Good";
    }
    else
    {
        data = L"Good";
    }
    if(globalReturnsTrueOrFalse())
    {
        printWcharLine(data[0]);
    }
    else
    {
        printWcharLine(data[0]);
    }
}
