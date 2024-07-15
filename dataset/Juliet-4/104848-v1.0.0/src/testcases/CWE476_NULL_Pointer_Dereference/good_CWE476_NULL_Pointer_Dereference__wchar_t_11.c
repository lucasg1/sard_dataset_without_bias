void FUN0()
{
    wchar_t * data;
    if(globalReturnsTrue())
    {
        data = NULL;
    }
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
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
    if(globalReturnsTrue())
    {
        data = NULL;
    }
    if(globalReturnsTrue())
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
void FUN2()
{
    wchar_t * data;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = L"Good";
    }
    if(globalReturnsTrue())
    {
        printWcharLine(data[0]);
    }
}
void FUN3()
{
    wchar_t * data;
    if(globalReturnsTrue())
    {
        data = L"Good";
    }
    if(globalReturnsTrue())
    {
        printWcharLine(data[0]);
    }
}
