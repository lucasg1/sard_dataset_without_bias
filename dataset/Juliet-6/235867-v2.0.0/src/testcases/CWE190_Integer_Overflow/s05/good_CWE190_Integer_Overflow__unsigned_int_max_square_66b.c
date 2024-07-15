void FUN0(unsigned int dataArray[]);
void FUN1()
{
    unsigned int data;
    unsigned int dataArray[5];
    data = 0;
    data = 2;
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(unsigned int dataArray[]);
void FUN3()
{
    unsigned int data;
    unsigned int dataArray[5];
    data = 0;
    data = UINT_MAX;
    dataArray[2] = data;
    FUN2(dataArray);
}
void FUN0(unsigned int dataArray[])
{
    unsigned int data = dataArray[2];
    {
        unsigned int result = data * data;
        printUnsignedLine(result);
    }
}
void FUN2(unsigned int dataArray[])
{
    unsigned int data = dataArray[2];
    if (abs((long)data) < (long)sqrt((double)UINT_MAX))
    {
        unsigned int result = data * data;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
