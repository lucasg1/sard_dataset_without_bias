static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    int64_t data;
    data = 0LL;
    if(FUN0())
    {
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
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
void FUN3()
{
    int64_t data;
    data = 0LL;
    if(FUN0())
    {
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(FUN0())
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
void FUN4()
{
    int64_t data;
    data = 0LL;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = -2;
    }
    if(FUN0())
    {
        if(data < 0) 
        {
            int64_t result = data * 2;
            printLongLongLine(result);
        }
    }
}
void FUN5()
{
    int64_t data;
    data = 0LL;
    if(FUN0())
    {
        data = -2;
    }
    if(FUN0())
    {
        if(data < 0) 
        {
            int64_t result = data * 2;
            printLongLongLine(result);
        }
    }
}
