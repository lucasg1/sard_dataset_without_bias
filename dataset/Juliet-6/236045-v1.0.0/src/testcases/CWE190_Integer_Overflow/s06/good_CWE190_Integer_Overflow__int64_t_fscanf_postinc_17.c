void FUN0()
{
    int i,k;
    int64_t data;
    data = 0LL;
    for(i = 0; i < 1; i++)
    {
        fscanf (stdin, "%" SCNd64, &data);
    }
    for(k = 0; k < 1; k++)
    {
        if (data < LLONG_MAX)
        {
            data++;
            int64_t result = data;
            printLongLongLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
void FUN1()
{
    int h,j;
    int64_t data;
    data = 0LL;
    for(h = 0; h < 1; h++)
    {
        data = 2;
    }
    for(j = 0; j < 1; j++)
    {
        {
            data++;
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}
