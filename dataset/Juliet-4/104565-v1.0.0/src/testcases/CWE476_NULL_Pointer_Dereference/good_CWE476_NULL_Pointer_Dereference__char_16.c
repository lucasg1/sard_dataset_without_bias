void FUN0()
{
    char * data;
    while(1)
    {
        data = NULL;
        break;
    }
    while(1)
    {
        if (data != NULL)
        {
            printHexCharLine(data[0]);
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
    char * data;
    while(1)
    {
        data = "Good";
        break;
    }
    while(1)
    {
        printHexCharLine(data[0]);
        break;
    }
}
