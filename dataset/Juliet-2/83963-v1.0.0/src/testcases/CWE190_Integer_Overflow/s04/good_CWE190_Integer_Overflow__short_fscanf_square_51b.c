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
    fscanf (stdin, "%hd", &data);
    FUN2(data);
}
void FUN0(short data)
{
    {
        short result = data * data;
        printIntLine(result);
    }
}
void FUN2(short data)
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
