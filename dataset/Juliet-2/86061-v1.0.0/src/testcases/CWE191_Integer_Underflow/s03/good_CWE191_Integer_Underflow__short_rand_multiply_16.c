void FUN0()
{
    short data;
    data = 0;
    while(1)
    {
        data = (short)RAND32();
        break;
    }
    while(1)
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
        break;
    }
}
void FUN1()
{
    short data;
    data = 0;
    while(1)
    {
        data = -2;
        break;
    }
    while(1)
    {
        if(data < 0) 
        {
            short result = data * 2;
            printIntLine(result);
        }
        break;
    }
}
