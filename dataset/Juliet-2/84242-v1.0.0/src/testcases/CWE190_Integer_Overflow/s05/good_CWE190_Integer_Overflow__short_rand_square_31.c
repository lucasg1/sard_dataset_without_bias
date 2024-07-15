void FUN0()
{
    short data;
    data = 0;
    data = 2;
    {
        short dataCopy = data;
        short data = dataCopy;
        {
            short result = data * data;
            printIntLine(result);
        }
    }
}
void FUN1()
{
    short data;
    data = 0;
    data = (short)RAND32();
    {
        short dataCopy = data;
        short data = dataCopy;
        if (abs((long)data) <= (long)sqrt((double)SHRT_MAX))
        {
            short result = data * data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
