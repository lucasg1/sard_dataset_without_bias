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
void FUN1(short data);
void FUN5()
{
    short data;
    data = 0;
    data = 2;
    FUN1(data);
}
void FUN3(short data);
void FUN7()
{
    short data;
    data = 0;
    fscanf (stdin, "%hd", &data);
    FUN3(data);
}
void FUN9(short data);
void FUN0(short data)
{
    FUN9(data);
}
void FUN11(short data);
void FUN2(short data)
{
    FUN11(data);
}
void FUN9(short data)
{
    {
        short result = data * data;
        printIntLine(result);
    }
}
void FUN11(short data)
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