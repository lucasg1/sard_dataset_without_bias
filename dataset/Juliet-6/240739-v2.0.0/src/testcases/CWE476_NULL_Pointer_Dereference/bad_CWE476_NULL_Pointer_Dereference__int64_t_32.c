void FUN0()
{
    int64_t * data;
    int64_t * *dataPtr1 = &data;
    int64_t * *dataPtr2 = &data;
    {
        int64_t * data = *dataPtr1;
        data = NULL;
        *dataPtr1 = data;
    }
    {
        int64_t * data = *dataPtr2;
<START>
        printLongLongLine(*data);
<END>
    }
}
