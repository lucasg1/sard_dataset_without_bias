void FUN0()
{
    int64_t data;
    int64_t *dataPtr1 = &data;
    int64_t *dataPtr2 = &data;
    data = 0LL;
    {
        int64_t data = *dataPtr1;
        data = -2;
        *dataPtr1 = data;
    }
    {
        int64_t data = *dataPtr2;
        {
            int64_t result = data - 1;
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
        data = LLONG_MIN;
        *dataPtr1 = data;
    }
    {
        int64_t data = *dataPtr2;
        if (data > LLONG_MIN)
        {
            int64_t result = data - 1;
            printLongLongLine(result);
        }
        else
        {
            printLine("data value is too large to perform subtraction.");
        }
    }
}
