void FUN0()
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
        {
<START>
            int64_t result = data * data;
<END>
            printLongLongLine(result);
        }
    }
}
