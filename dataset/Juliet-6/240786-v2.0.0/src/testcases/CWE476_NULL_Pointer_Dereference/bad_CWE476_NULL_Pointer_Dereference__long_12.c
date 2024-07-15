void FUN0()
{
    long * data;
    long tmpData = 5L;
    if(globalReturnsTrueOrFalse())
    {
        data = NULL;
    }
    else
    {
        {
            data = &tmpData;
        }
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
        printLongLine(*data);
<END>
    }
    else
    {
        if (data != NULL)
        {
            printLongLine(*data);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
