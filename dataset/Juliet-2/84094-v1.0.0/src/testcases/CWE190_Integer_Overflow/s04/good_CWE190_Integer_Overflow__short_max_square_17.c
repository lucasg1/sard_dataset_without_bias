void FUN0()
{
    int i,k;
    short data;
    data = 0;
    for(i = 0; i < 1; i++)
    {
        data = SHRT_MAX;
    }
    for(k = 0; k < 1; k++)
    {
        if (abs((long)data) <= (long)sqrt((double)SHRT_MAX))
        {
            short result = data * data;
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
        data = 2;
    }
    for(j = 0; j < 1; j++)
    {
        {
            short result = data * data;
            printIntLine(result);
        }
    }
}
