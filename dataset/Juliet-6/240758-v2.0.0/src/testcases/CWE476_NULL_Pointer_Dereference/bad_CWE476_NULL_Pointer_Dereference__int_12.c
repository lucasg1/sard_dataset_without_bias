void FUN0()
{
    int * data;
    int tmpData = 5;
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
        printIntLine(*data);
<END>
    }
    else
    {
        if (data != NULL)
        {
            printIntLine(*data);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
