static short FUN0(short data)
{
    data = 2;
    return data;
}
void FUN1()
{
    short data;
    data = 0;
    data = FUN0(data);
    {
        short result = data * data;
        printIntLine(result);
    }
}
static short FUN2(short data)
{
    fscanf (stdin, "%hd", &data);
    return data;
}
void FUN3()
{
    short data;
    data = 0;
    data = FUN2(data);
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
