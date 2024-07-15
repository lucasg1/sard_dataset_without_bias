void FUN0()
{
    short data;
    data = 0;
    while(1)
    {
        data = (short)RAND32();
        break;
    }
    while(1)
    {
        if (abs((long)data) <= (long)sqrt((double)SHRT_MAX))
        {
            short result = data * data;
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
            short result = data * data;
            printIntLine(result);
        }
        break;
    }
}
