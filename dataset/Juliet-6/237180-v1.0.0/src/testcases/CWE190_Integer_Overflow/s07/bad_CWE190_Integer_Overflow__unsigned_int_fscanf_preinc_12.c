void FUN0()
{
    unsigned int data;
    data = 0;
    if(globalReturnsTrueOrFalse())
    {
        fscanf (stdin, "%u", &data);
    }
    else
    {
        data = 2;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
<START>
            ++data;
<END>
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
    else
    {
        if (data < UINT_MAX)
        {
            ++data;
            unsigned int result = data;
            printUnsignedLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
