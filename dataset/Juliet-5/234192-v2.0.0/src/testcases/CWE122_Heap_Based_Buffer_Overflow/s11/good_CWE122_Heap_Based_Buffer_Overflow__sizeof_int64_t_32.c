void FUN0()
{
    int64_t * data;
    int64_t * *dataPtr1 = &data;
    int64_t * *dataPtr2 = &data;
    data = NULL;
    {
        int64_t * data = *dataPtr1;
        data = (int64_t *)malloc(sizeof(*data));
        if (data == NULL) {exit(-1);}
        *data = 2147483643LL;
        *dataPtr1 = data;
    }
    {
        int64_t * data = *dataPtr2;
        printLongLongLine(*data);
        free(data);
    }
}
