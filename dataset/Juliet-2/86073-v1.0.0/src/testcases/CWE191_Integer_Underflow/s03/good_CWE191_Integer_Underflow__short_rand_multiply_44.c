void FUN0(short data)
{
    if(data < 0) 
    {
        short result = data * 2;
        printIntLine(result);
    }
}
void FUN1()
{
    short data;
    void (*funcPtr) (short) = FUN0;
    data = 0;
    data = -2;
    funcPtr(data);
}
void FUN2(short data)
{
    if(data < 0) 
    {
        if (data > (SHRT_MIN/2))
        {
            short result = data * 2;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too small to perform multiplication.");
        }
    }
}
void FUN3()
{
    short data;
    void (*funcPtr) (short) = FUN2;
    data = 0;
    data = (short)RAND32();
    funcPtr(data);
}
