void FUN0(short data);
void FUN1()
{
    short data;
    data = 0;
    data = -2;
    FUN0(data);
}
void FUN2(short data);
void FUN3()
{
    short data;
    data = 0;
    data = (short)RAND32();
    FUN2(data);
}
void FUN0(short data)
{
    {
        data--;
        short result = data;
        printIntLine(result);
    }
}
void FUN2(short data)
{
    if (data > SHRT_MIN)
    {
        data--;
        short result = data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
