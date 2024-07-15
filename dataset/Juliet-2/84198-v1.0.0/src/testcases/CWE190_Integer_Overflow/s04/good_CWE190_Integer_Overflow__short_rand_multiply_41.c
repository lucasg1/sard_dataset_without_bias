void FUN0(short data)
{
    if(data > 0) 
    {
        short result = data * 2;
        printIntLine(result);
    }
}
void FUN1()
{
    short data;
    data = 0;
    data = 2;
    FUN0(data);
}
void FUN2(short data)
{
    if(data > 0) 
    {
        if (data < (SHRT_MAX/2))
        {
            short result = data * 2;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
void FUN3()
{
    short data;
    data = 0;
    data = (short)RAND32();
    FUN2(data);
}
