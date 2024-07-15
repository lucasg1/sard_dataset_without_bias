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
        if (data > INT_MIN && abs(data) < (long)sqrt((double)INT_MAX))
        {
            int result = data * data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
    else
    {
        if (data > INT_MIN && abs(data) < (long)sqrt((double)INT_MAX))
        {
            int result = data * data;
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
            int result = data * data;
            printIntLine(result);
        }
    }
    else
    {
        {
            int result = data * data;
            printIntLine(result);
        }
    }
}
