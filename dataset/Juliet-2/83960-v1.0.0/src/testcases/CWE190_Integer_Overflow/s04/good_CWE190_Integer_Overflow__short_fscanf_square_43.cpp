namespace NAMESPACE0
{
void FUN0(short &data)
{
    data = 2;
}
void FUN1()
{
    short data;
    data = 0;
    FUN0(data);
    {
        short result = data * data;
        printIntLine(result);
    }
}
void FUN2(short &data)
{
    fscanf (stdin, "%hd", &data);
}
void FUN3()
{
    short data;
    data = 0;
    FUN2(data);
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
} 