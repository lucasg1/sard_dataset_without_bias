namespace NAMESPACE0
{
void FUN0(short &data)
{
    data = -2;
}
void FUN1()
{
    short data;
    data = 0;
    FUN0(data);
    {
        short result = data - 1;
        printIntLine(result);
    }
}
void FUN2(short &data)
{
    data = SHRT_MIN;
}
void FUN3()
{
    short data;
    data = 0;
    FUN2(data);
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
} 
