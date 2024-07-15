void FUN0()
{
    int64_t * data;
    int64_t tmpData = 5LL;
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
        printLongLongLine(*data);
<END>
    }
    else
    {
        if (data != NULL)
        {
            printLongLongLine(*data);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
