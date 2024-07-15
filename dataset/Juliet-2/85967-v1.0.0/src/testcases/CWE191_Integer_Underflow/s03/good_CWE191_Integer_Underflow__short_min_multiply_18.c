void FUN0()
{
    short data;
    data = 0;
    goto source;
source:
    data = SHRT_MIN;
    goto sink;
sink:
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
void FUN1()
{
    short data;
    data = 0;
    goto source;
source:
    data = -2;
    goto sink;
sink:
    if(data < 0) 
    {
        short result = data * 2;
        printIntLine(result);
    }
}
