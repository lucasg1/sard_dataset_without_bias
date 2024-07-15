void FUN0(short data)
{
    {
        --data;
        short result = data;
        printIntLine(result);
    }
}
void FUN1()
{
    short data;
    data = 0;
    data = -2;
    FUN0(data);
}
void FUN2(short data)
{
    if (data > SHRT_MIN)
    {
        --data;
        short result = data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
void FUN3()
{
    short data;
    data = 0;
    fscanf (stdin, "%hd", &data);
    FUN2(data);
}
