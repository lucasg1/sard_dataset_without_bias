void FUN0()
{
    int64_t data;
    data = 0LL;
    while(1)
    {
        fscanf (stdin, "%" SCNd64, &data);
        break;
    }
    while(1)
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
        break;
    }
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    while(1)
    {
        data = -2;
        break;
    }
    while(1)
    {
        if(data < 0) 
        {
            int64_t result = data * 2;
            printLongLongLine(result);
        }
        break;
    }
}
