void FUN0()
{
    int data;
    data = 0;
    if(globalReturnsTrueOrFalse())
    {
        fscanf(stdin, "%d", &data);
    }
    else
    {
        fscanf(stdin, "%d", &data);
    }
    if(globalReturnsTrueOrFalse())
    {
        if (data > INT_MIN)
        {
            int result = data - 1;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
        }
    }
    else
    {
        if (data > INT_MIN)
        {
            int result = data - 1;
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
    int data;
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
            int result = data - 1;
            printIntLine(result);
        }
    }
    else
    {
        {
            int result = data - 1;
            printIntLine(result);
        }
    }
}
