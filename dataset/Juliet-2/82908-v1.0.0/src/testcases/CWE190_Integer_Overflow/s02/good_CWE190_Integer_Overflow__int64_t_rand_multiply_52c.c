void FUN0(int64_t data);
void FUN1()
{
    int64_t data;
    data = 0LL;
    data = 2;
    FUN0(data);
}
void FUN2(int64_t data);
void FUN3()
{
    int64_t data;
    data = 0LL;
    data = (int64_t)RAND64();
    FUN2(data);
}
void FUN5(int64_t data);
void FUN0(int64_t data)
{
    FUN5(data);
}
void FUN7(int64_t data);
void FUN2(int64_t data)
{
    FUN7(data);
}
void FUN5(int64_t data)
{
    if(data > 0) 
    {
        int64_t result = data * 2;
        printLongLongLine(result);
    }
}
void FUN7(int64_t data)
{
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
