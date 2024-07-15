void FUN0()
{
    char * data;
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
    if(1)
    {
        data = NULL;
    }
    if(1)
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
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = "Good";
    }
    if(1)
    {
        printHexCharLine(data[0]);
    }
}
void FUN3()
{
    char * data;
    if(1)
    {
        data = "Good";
    }
    if(1)
    {
        printHexCharLine(data[0]);
    }
}
