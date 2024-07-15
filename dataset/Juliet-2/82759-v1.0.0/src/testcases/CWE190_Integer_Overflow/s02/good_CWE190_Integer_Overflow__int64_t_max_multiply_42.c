static int64_t FUN0(int64_t data)
{
    data = 2;
    return data;
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    data = FUN0(data);
    if(data > 0) 
    {
        int64_t result = data * 2;
        printLongLongLine(result);
    }
}
static int64_t FUN2(int64_t data)
{
    data = LLONG_MAX;
    return data;
}
void FUN3()
{
    int64_t data;
    data = 0LL;
    data = FUN2(data);
    if(data > 0) 
    {
        if (data < (LLONG_MAX/2))
        {
            int64_t result = data * 2;
            printLongLongLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
