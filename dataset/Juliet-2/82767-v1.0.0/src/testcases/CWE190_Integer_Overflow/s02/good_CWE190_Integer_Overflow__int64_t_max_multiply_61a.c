int64_t FUN0(int64_t data)
{
    data = 2;
    return data;
}
int64_t FUN1(int64_t data)
{
    data = LLONG_MAX;
    return data;
}
int64_t FUN0(int64_t data);
void FUN3()
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
int64_t FUN1(int64_t data);
void FUN5()
{
    int64_t data;
    data = 0LL;
    data = FUN1(data);
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
