void FUN0()
{
    char * data;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = NULL;
    }
    if(GLOBAL_CONST_FIVE!=5)
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
    if(GLOBAL_CONST_FIVE==5)
    {
        data = NULL;
    }
    if(GLOBAL_CONST_FIVE==5)
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
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = "Good";
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        printHexCharLine(data[0]);
    }
}
void FUN3()
{
    char * data;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = "Good";
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        printHexCharLine(data[0]);
    }
}
