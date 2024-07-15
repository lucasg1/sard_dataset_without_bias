void FUN0(short * data);
void FUN1()
{
    short data;
    data = 0;
    data = -2;
    FUN0(&data);
}
void FUN2(short * data);
void FUN3()
{
    short data;
    data = 0;
    fscanf (stdin, "%hd", &data);
    FUN2(&data);
}
void FUN0(short * dataPtr)
{
    short data = *dataPtr;
    {
        short result = data - 1;
        printIntLine(result);
    }
}
void FUN2(short * dataPtr)
{
    short data = *dataPtr;
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
