void FUN0()
{
    int i,k;
    short data;
    data = 0;
    for(i = 0; i < 1; i++)
    {
        data = SHRT_MIN;
    }
    for(k = 0; k < 1; k++)
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
}
void FUN1()
{
    int h,j;
    short data;
    data = 0;
    for(h = 0; h < 1; h++)
    {
        data = -2;
    }
    for(j = 0; j < 1; j++)
    {
        if(data < 0) 
        {
            short result = data * 2;
            printIntLine(result);
        }
    }
}
