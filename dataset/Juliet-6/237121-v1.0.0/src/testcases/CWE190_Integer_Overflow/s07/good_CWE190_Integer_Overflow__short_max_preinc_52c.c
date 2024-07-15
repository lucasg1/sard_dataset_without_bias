void FUN0(short data);
void FUN1()
{
    short data;
    data = 0;
    data = 2;
    FUN0(data);
}
void FUN2(short data);
void FUN3()
{
    short data;
    data = 0;
    data = SHRT_MAX;
    FUN2(data);
}
void FUN5(short data);
void FUN0(short data)
{
    FUN5(data);
}
void FUN7(short data);
void FUN2(short data)
{
    FUN7(data);
}
void FUN5(short data)
{
    {
        ++data;
        short result = data;
        printIntLine(result);
    }
}
void FUN7(short data)
{
    if (data < SHRT_MAX)
    {
        ++data;
        short result = data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
