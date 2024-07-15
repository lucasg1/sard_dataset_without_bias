void FUN0()
{
    char data;
    data = ' ';
    if(globalReturnsTrueOrFalse())
    {
        data = CHAR_MAX;
    }
    else
    {
        data = 2;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
<START>
            char result = data + 1;
<END>
            printHexCharLine(result);
        }
    }
    else
    {
        if (data < CHAR_MAX)
        {
            char result = data + 1;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
