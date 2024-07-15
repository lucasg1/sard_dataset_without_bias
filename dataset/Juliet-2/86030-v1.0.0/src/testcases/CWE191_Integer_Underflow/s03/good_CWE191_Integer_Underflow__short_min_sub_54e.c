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
void FUN5()
{
    short data;
    data = 0;
    data = -2;
    FUN4(data);
}
void FUN6(short data);
void FUN7()
{
    short data;
    data = 0;
    data = SHRT_MIN;
    FUN6(data);
}
void FUN1(short data);
void FUN4(short data)
{
    FUN1(data);
}
void FUN3(short data);
void FUN6(short data)
{
    FUN3(data);
}
void FUN13(short data);
void FUN0(short data)
{
    FUN13(data);
}
void FUN15(short data);
void FUN2(short data)
{
    FUN15(data);
}
void FUN13(short data)
{
    {
        short result = data - 1;
        printIntLine(result);
    }
}
void FUN15(short data)
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
