void FUN0()
{
    char * data;
    if(globalTrue)
    {
        data = NULL;
    }
    if(globalFalse)
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
    if(globalTrue)
    {
        data = NULL;
    }
    if(globalTrue)
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
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = "Good";
    }
    if(globalTrue)
    {
        printHexCharLine(data[0]);
    }
}
void FUN3()
{
    char * data;
    if(globalTrue)
    {
        data = "Good";
    }
    if(globalTrue)
    {
        printHexCharLine(data[0]);
    }
}
