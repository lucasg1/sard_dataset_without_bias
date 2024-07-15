static int staticFive = 5;
void FUN0()
{
    wchar_t * data;
    if(staticFive==5)
    {
        data = NULL;
    }
    if(staticFive!=5)
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
    if(staticFive==5)
    {
        data = NULL;
    }
    if(staticFive==5)
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
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = L"Good";
    }
    if(staticFive==5)
    {
        printWcharLine(data[0]);
    }
}
void FUN3()
{
    wchar_t * data;
    if(staticFive==5)
    {
        data = L"Good";
    }
    if(staticFive==5)
    {
        printWcharLine(data[0]);
    }
}
