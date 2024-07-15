namespace NAMESPACE0
{
void FUN0(short &data)
{
    data = 2;
}
void FUN1()
{
    short data;
    data = 0;
    FUN0(data);
    if(data > 0) 
    {
        short result = data * 2;
        printIntLine(result);
    }
}
void FUN2(short &data)
{
    data = (short)RAND32();
}
void FUN3()
{
    short data;
    data = 0;
    FUN2(data);
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
} 
