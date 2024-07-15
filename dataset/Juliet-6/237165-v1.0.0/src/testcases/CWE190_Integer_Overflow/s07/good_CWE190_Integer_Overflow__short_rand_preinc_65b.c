void FUN0(short data);
void FUN1()
{
    short data;
    void (*funcPtr) (short) = FUN0;
    data = 0;
    data = 2;
    funcPtr(data);
}
void FUN2(short data);
void FUN3()
{
    short data;
    void (*funcPtr) (short) = FUN2;
    data = 0;
    data = (short)RAND32();
    funcPtr(data);
}
void FUN0(short data)
{
    {
        ++data;
        short result = data;
        printIntLine(result);
    }
}
void FUN2(short data)
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
