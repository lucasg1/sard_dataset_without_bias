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
    data = SHRT_MIN;
    FUN2(data);
}
void FUN0(short data)
{
    {
        short result = data - 1;
        printIntLine(result);
    }
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
