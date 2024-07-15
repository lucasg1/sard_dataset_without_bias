void FUN0()
{
    short data;
    data = 0;
    goto source;
source:
    data = (short)RAND32();
    goto sink;
sink:
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
void FUN1()
{
    short data;
    data = 0;
    goto source;
source:
    data = 2;
    goto sink;
sink:
    if(data > 0) 
    {
        short result = data * 2;
        printIntLine(result);
    }
}
