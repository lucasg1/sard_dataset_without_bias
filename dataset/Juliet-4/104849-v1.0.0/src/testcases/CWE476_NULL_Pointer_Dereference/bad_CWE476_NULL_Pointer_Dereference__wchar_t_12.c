void FUN0()
{
    wchar_t * data;
    if(globalReturnsTrueOrFalse())
    {
        data = NULL;
    }
    else
    {
        data = L"Good";
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
        printWcharLine(data[0]);
<END>
    }
    else
    {
        if (data != NULL)
        {
            printWcharLine(data[0]);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
