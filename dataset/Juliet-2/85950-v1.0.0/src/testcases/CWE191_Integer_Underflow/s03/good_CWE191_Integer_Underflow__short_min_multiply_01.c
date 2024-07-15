void FUN0()
{
    short data;
    data = 0;
    data = -2;
    if(data < 0) 
    {
        short result = data * 2;
        printIntLine(result);
    }
}
void FUN1()
{
    short data;
    data = 0;
    data = SHRT_MIN;
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
