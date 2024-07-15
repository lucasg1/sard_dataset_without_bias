void FUN0(short data);
void FUN1(short data)
{
    FUN0(data);
}
void FUN2(short data);
void FUN3(short data)
{
    FUN2(data);
}
void FUN4(short data);
void FUN0(short data)
{
    FUN4(data);
}
void FUN6(short data);
void FUN2(short data)
{
    FUN6(data);
}
void FUN8(short data);
void FUN4(short data)
{
    FUN8(data);
}
void FUN10(short data);
void FUN6(short data)
{
    FUN10(data);
}
void FUN1(short data);
void FUN13()
{
    short data;
    data = 0;
    data = 2;
    FUN1(data);
}
void FUN3(short data);
void FUN15()
{
    short data;
    data = 0;
    data = SHRT_MAX;
    FUN3(data);
}
void FUN8(short data)
{
    {
        short result = data * data;
        printIntLine(result);
    }
}
void FUN10(short data)
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
}
