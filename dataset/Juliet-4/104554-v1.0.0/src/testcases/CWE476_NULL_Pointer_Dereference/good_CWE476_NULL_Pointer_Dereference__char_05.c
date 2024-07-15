static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    char * data;
    if(staticTrue)
    {
        data = NULL;
    }
    if(staticFalse)
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
    if(staticTrue)
    {
        data = NULL;
    }
    if(staticTrue)
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
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = "Good";
    }
    if(staticTrue)
    {
        printHexCharLine(data[0]);
    }
}
void FUN3()
{
    char * data;
    if(staticTrue)
    {
        data = "Good";
    }
    if(staticTrue)
    {
        printHexCharLine(data[0]);
    }
}
