void FUN0()
{
    int64_t data;
    data = 0LL;
    data = 2;
    if(data > 0) 
    {
        int64_t result = data * 2;
        printLongLongLine(result);
    }
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    fscanf (stdin, "%" SCNd64, &data);
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
