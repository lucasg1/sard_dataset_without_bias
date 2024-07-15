void FUN0()
{
    char * data;
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
            printHexCharLine(data[0]);
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
            printHexCharLine(data[0]);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
void FUN1()
{
    char * data;
    if(globalReturnsTrueOrFalse())
    {
        data = "Good";
    }
    else
    {
        data = "Good";
    }
    if(globalReturnsTrueOrFalse())
    {
        printHexCharLine(data[0]);
    }
    else
    {
        printHexCharLine(data[0]);
    }
}
