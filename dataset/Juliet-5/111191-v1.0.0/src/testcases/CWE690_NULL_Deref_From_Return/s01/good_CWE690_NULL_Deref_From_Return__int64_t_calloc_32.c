void FUN0()
{
    int64_t * data;
    int64_t * *dataPtr1 = &data;
    int64_t * *dataPtr2 = &data;
    data = NULL; 
    {
        int64_t * data = *dataPtr1;
        data = (int64_t *)calloc(1, sizeof(int64_t));
        *dataPtr1 = data;
    }
    {
        int64_t * data = *dataPtr2;
        if (data != NULL)
        {
            data[0] = 5LL;
            printLongLongLine(data[0]);
            free(data);
        }
    }
}
