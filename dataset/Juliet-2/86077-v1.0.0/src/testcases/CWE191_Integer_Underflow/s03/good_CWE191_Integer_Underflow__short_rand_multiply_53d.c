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
void FUN4(short data);
void FUN5()
{
    short data;
    data = 0;
    data = -2;
    FUN4(data);
}
void FUN6(short data);
void FUN7()
{
    short data;
    data = 0;
    data = (short)RAND32();
    FUN6(data);
}
void FUN1(short data);
void FUN4(short data)
{
    FUN1(data);
}
void FUN3(short data);
void FUN6(short data)
{
    FUN3(data);
}
void FUN0(short data)
{
    if(data < 0) 
    {
        short result = data * 2;
        printIntLine(result);
    }
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
