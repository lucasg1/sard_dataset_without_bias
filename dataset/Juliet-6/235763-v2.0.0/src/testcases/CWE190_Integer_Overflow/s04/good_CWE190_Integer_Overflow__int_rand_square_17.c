void FUN0()
{
    int i,k;
    int data;
    data = 0;
    for(i = 0; i < 1; i++)
    {
        data = RAND32();
    }
    for(k = 0; k < 1; k++)
    {
        if (data > INT_MIN && abs(data) < (long)sqrt((double)INT_MAX))
        {
            int result = data * data;
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
    int data;
    data = 0;
    for(h = 0; h < 1; h++)
    {
        data = 2;
    }
    for(j = 0; j < 1; j++)
    {
        {
            int result = data * data;
            printIntLine(result);
        }
    }
}
