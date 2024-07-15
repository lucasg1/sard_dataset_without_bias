void FUN0()
{
    char * data;
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
    if(globalReturnsTrue())
    {
        data = NULL;
    }
    if(globalReturnsTrue())
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
void FUN2()
{
    char * data;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = "Good";
    }
    if(globalReturnsTrue())
    {
        printHexCharLine(data[0]);
    }
}
void FUN3()
{
    char * data;
    if(globalReturnsTrue())
    {
        data = "Good";
    }
    if(globalReturnsTrue())
    {
        printHexCharLine(data[0]);
    }
}
