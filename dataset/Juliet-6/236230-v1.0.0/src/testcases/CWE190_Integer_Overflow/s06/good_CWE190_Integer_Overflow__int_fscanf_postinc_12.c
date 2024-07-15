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
        if (data < INT_MAX)
        {
            data++;
            int result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
    else
    {
        if (data < INT_MAX)
        {
            data++;
            int result = data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
void FUN1()
{
    int data;
    data = 0;
    if(globalReturnsTrueOrFalse())
    {
        data = 2;
    }
    else
    {
        data = 2;
    }
    if(globalReturnsTrueOrFalse())
    {
        {
            data++;
            int result = data;
            printIntLine(result);
        }
    }
    else
    {
        {
            data++;
            int result = data;
            printIntLine(result);
        }
    }
}
