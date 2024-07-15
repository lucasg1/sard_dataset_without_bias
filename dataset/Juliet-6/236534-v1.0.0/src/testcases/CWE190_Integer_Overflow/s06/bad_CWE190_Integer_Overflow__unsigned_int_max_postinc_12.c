void FUN0()
{
    unsigned int data;
    data = 0;
    if(globalReturnsTrueOrFalse())
    {
        data = UINT_MAX;
    }
    else
    {
        data = 2;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
<START>
            data++;
<END>
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
    else
    {
        if (data < UINT_MAX)
        {
            data++;
            unsigned int result = data;
            printUnsignedLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
