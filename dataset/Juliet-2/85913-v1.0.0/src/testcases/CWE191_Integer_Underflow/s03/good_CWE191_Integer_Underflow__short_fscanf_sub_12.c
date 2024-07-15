void FUN0()
{
    short data;
    data = 0;
    if(globalReturnsTrueOrFalse())
    {
        fscanf (stdin, "%hd", &data);
    }
    else
    {
        fscanf (stdin, "%hd", &data);
    }
    if(globalReturnsTrueOrFalse())
    {
        if (data > SHRT_MIN)
        {
            short result = data - 1;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
        }
    }
    else
    {
        if (data > SHRT_MIN)
        {
            short result = data - 1;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
        }
    }
}
void FUN1()
{
    short data;
    data = 0;
    if(globalReturnsTrueOrFalse())
    {
        data = -2;
    }
    else
    {
        data = -2;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
            short result = data - 1;
            printIntLine(result);
        }
    }
    else
    {
        {
            short result = data - 1;
            printIntLine(result);
        }
    }
}
