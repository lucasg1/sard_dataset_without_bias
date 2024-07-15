void FUN0()
{
    int64_t data;
    int64_t *dataPtr1 = &data;
    int64_t *dataPtr2 = &data;
    data = 0LL;
    {
        int64_t data = *dataPtr1;
        data = (int64_t)RAND64();
        *dataPtr1 = data;
    }
    {
        int64_t data = *dataPtr2;
        {
<START>
            data--;
<END>
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}
