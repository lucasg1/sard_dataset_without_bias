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
            data++;
            int64_t result = data;
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
        data = LLONG_MAX;
        *dataPtr1 = data;
    }
    {
        int64_t data = *dataPtr2;
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
