void FUN0()
{
    int i,k;
    int64_t data;
    data = 0LL;
    for(i = 0; i < 1; i++)
    {
        data = (int64_t)RAND64();
    }
    for(k = 0; k < 1; k++)
    {
        if(data < 0) 
        {
            if (data > (LLONG_MIN/2))
            {
                int64_t result = data * 2;
                printLongLongLine(result);
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
    int64_t data;
    data = 0LL;
    for(h = 0; h < 1; h++)
    {
        data = -2;
    }
    for(j = 0; j < 1; j++)
    {
        if(data < 0) 
        {
            int64_t result = data * 2;
            printLongLongLine(result);
        }
    }
}
