void FUN0()
{
    int data;
    data = 0;
    while(1)
    {
        data = INT_MAX;
        break;
    }
    while(1)
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
        break;
    }
}
void FUN1()
{
    int data;
    data = 0;
    while(1)
    {
        data = 2;
        break;
    }
    while(1)
    {
        {
            int result = data * data;
            printIntLine(result);
        }
        break;
    }
}
