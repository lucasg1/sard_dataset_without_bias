void FUN0()
{
    int64_t data;
    data = 0LL;
    if(GLOBAL_CONST_FIVE==5)
    {
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(GLOBAL_CONST_FIVE!=5)
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
void FUN1()
{
    int64_t data;
    data = 0LL;
    if(GLOBAL_CONST_FIVE==5)
    {
        fscanf (stdin, "%" SCNd64, &data);
    }
    if(GLOBAL_CONST_FIVE==5)
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
void FUN2()
{
    int64_t data;
    data = 0LL;
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = -2;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        if(data < 0) 
        {
            int64_t result = data * 2;
            printLongLongLine(result);
        }
    }
}
void FUN3()
{
    int64_t data;
    data = 0LL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = -2;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        if(data < 0) 
        {
            int64_t result = data * 2;
            printLongLongLine(result);
        }
    }
}
