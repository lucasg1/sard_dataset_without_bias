void FUN0()
{
    short data;
    data = 0;
    data = 2;
    {
        short result = data + 1;
        printIntLine(result);
    }
}
void FUN1()
{
    short data;
    data = 0;
    data = (short)RAND32();
    if (data < SHRT_MAX)
    {
        short result = data + 1;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
