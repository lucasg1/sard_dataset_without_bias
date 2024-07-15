void FUN0()
{
    char * data;
    if(globalReturnsTrueOrFalse())
    {
        data = NULL;
    }
    else
    {
        data = "Good";
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
        printHexCharLine(data[0]);
<END>
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
