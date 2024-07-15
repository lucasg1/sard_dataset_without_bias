namespace NAMESPACE0
{
void FUN0(int64_t &data)
{
    data = -2;
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    FUN0(data);
    if(data < 0) 
    {
        int64_t result = data * 2;
        printLongLongLine(result);
    }
}
void FUN2(int64_t &data)
{
    fscanf (stdin, "%" SCNd64, &data);
}
void FUN3()
{
    int64_t data;
    data = 0LL;
    FUN2(data);
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
