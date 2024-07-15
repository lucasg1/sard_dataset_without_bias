void FUN0(int64_t data);
void FUN1()
{
    int64_t data;
    data = 0LL;
    data = -2;
    FUN0(data);
}
void FUN2(int64_t data);
void FUN3()
{
    int64_t data;
    data = 0LL;
    fscanf (stdin, "%lld", &data);
    FUN2(data);
}
void FUN0(int64_t data)
{
    if(data < 0) 
    {
        int64_t result = data * 2;
        printLongLongLine(result);
    }
}
void FUN2(int64_t data)
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
