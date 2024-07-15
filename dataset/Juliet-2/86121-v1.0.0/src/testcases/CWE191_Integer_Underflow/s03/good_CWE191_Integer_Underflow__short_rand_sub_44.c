void FUN0(short data)
{
    {
        short result = data - 1;
        printIntLine(result);
    }
}
void FUN1()
{
    short data;
    void (*funcPtr) (short) = FUN0;
    data = 0;
    data = -2;
    funcPtr(data);
}
void FUN2(short data)
{
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
void FUN3()
{
    short data;
    void (*funcPtr) (short) = FUN2;
    data = 0;
    data = (short)RAND32();
    funcPtr(data);
}
