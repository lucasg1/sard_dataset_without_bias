void FUN0()
{
    wchar_t * data;
    if(1)
    {
        data = NULL;
    }
    if(0)
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
    if(1)
    {
        data = NULL;
    }
    if(1)
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
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = L"Good";
    }
    if(1)
    {
        printWcharLine(data[0]);
    }
}
void FUN3()
{
    wchar_t * data;
    if(1)
    {
        data = L"Good";
    }
    if(1)
    {
        printWcharLine(data[0]);
    }
}
