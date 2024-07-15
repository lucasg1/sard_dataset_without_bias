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
        if (data > LLONG_MIN)
        {
            int64_t result = data - 1;
            printLongLongLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
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
        {
            int64_t result = data - 1;
            printLongLongLine(result);
        }
        break;
    }
}
