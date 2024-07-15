void FUN0()
{
    int64_t data;
    int64_t *dataPtr1 = &data;
    int64_t *dataPtr2 = &data;
    data = 0LL;
    {
        int64_t data = *dataPtr1;
        data = 2;
        *dataPtr1 = data;
    }
    {
        int64_t data = *dataPtr2;
        {
            int64_t result = data * data;
            printLongLongLine(result);
        }
    }
}
void FUN1()
{
    int64_t data;
    int64_t *dataPtr1 = &data;
    int64_t *dataPtr2 = &data;
    data = 0LL;
    {
        int64_t data = *dataPtr1;
        fscanf (stdin, "%" SCNd64, &data);
        *dataPtr1 = data;
    }
    {
        int64_t data = *dataPtr2;
        if (imaxabs((intmax_t)data) <= sqrtl(LLONG_MAX))
        {
            int64_t result = data * data;
            printLongLongLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
