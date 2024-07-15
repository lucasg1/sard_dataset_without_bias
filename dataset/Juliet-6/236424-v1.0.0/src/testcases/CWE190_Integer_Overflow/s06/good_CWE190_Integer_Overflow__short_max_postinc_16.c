void FUN0()
{
    short data;
    data = 0;
    while(1)
    {
        data = SHRT_MAX;
        break;
    }
    while(1)
    {
        if (data < SHRT_MAX)
        {
            data++;
            short result = data;
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
    short data;
    data = 0;
    while(1)
    {
        data = 2;
        break;
    }
    while(1)
    {
        {
            data++;
            short result = data;
            printIntLine(result);
        }
        break;
    }
}
