static short FUN0(short data)
{
    data = -2;
    return data;
}
void FUN1()
{
    short data;
    data = 0;
    data = FUN0(data);
    {
        short result = data - 1;
        printIntLine(result);
    }
}
static short FUN2(short data)
{
    data = (short)RAND32();
    return data;
}
void FUN3()
{
    short data;
    data = 0;
    data = FUN2(data);
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