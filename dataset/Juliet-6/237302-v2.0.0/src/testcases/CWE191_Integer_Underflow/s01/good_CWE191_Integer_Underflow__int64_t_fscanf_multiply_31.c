void FUN0()
{
    int64_t data;
    data = 0LL;
    data = -2;
    {
        int64_t dataCopy = data;
        int64_t data = dataCopy;
        if(data < 0) 
        {
            int64_t result = data * 2;
            printLongLongLine(result);
        }
    }
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    fscanf (stdin, "%" SCNd64, &data);
    {
        int64_t dataCopy = data;
        int64_t data = dataCopy;
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
