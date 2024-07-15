void FUN0()
{
    wchar_t * data;
    while(1)
    {
        data = NULL;
        break;
    }
    while(1)
    {
        if (data != NULL)
        {
            printWcharLine(data[0]);
        }
        else
        {
            printLine("data is NULL");
        }
        break;
    }
}
void FUN1()
{
    wchar_t * data;
    while(1)
    {
        data = L"Good";
        break;
    }
    while(1)
    {
        printWcharLine(data[0]);
        break;
    }
}
