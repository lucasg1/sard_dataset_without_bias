void FUN0(int64_t dataArray[]);
void FUN1()
{
    int64_t data;
    int64_t dataArray[5];
    data = 0LL;
    data = -2;
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(int64_t dataArray[]);
void FUN3()
{
    int64_t data;
    int64_t dataArray[5];
    data = 0LL;
    fscanf (stdin, "%lld", &data);
    dataArray[2] = data;
    FUN2(dataArray);
}
void FUN0(int64_t dataArray[])
{
    int64_t data = dataArray[2];
    if(data < 0) 
    {
        int64_t result = data * 2;
        printLongLongLine(result);
    }
}
void FUN2(int64_t dataArray[])
{
    int64_t data = dataArray[2];
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
