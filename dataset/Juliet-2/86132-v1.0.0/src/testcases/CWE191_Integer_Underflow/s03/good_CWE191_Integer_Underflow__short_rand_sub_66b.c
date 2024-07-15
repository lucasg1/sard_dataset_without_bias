void FUN0(short dataArray[]);
void FUN1()
{
    short data;
    short dataArray[5];
    data = 0;
    data = -2;
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(short dataArray[]);
void FUN3()
{
    short data;
    short dataArray[5];
    data = 0;
    data = (short)RAND32();
    dataArray[2] = data;
    FUN2(dataArray);
}
void FUN0(short dataArray[])
{
    short data = dataArray[2];
    {
        short result = data - 1;
        printIntLine(result);
    }
}
void FUN2(short dataArray[])
{
    short data = dataArray[2];
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
