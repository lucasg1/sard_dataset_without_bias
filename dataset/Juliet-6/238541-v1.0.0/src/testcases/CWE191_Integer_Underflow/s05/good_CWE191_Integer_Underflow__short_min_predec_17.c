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
        if (data > SHRT_MIN)
        {
            --data;
            short result = data;
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
    int h,j;
    short data;
    data = 0;
    for(h = 0; h < 1; h++)
    {
        data = -2;
    }
    for(j = 0; j < 1; j++)
    {
        {
            --data;
            short result = data;
            printIntLine(result);
        }
    }
}
