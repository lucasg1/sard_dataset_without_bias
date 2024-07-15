void FUN0()
{
    short data;
    data = 0;
    data = 2;
    {
        short dataCopy = data;
        short data = dataCopy;
        if(data > 0) 
        {
            short result = data * 2;
            printIntLine(result);
        }
    }
}
void FUN1()
{
    short data;
    data = 0;
    data = SHRT_MAX;
    {
        short dataCopy = data;
        short data = dataCopy;
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
