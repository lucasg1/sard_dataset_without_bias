short FUN0(short data)
{
    data = 2;
    return data;
}
short FUN1(short data)
{
    fscanf (stdin, "%hd", &data);
    return data;
}
short FUN0(short data);
void FUN3()
{
    short data;
    data = 0;
    data = FUN0(data);
    {
        short result = data + 1;
        printIntLine(result);
    }
}
short FUN1(short data);
void FUN5()
{
    short data;
    data = 0;
    data = FUN1(data);
    if (data < SHRT_MAX)
    {
        short result = data + 1;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
