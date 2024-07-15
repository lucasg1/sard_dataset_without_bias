void FUN0()
{
    int64_t * data;
    data = NULL; 
    data = (int64_t *)calloc(1, sizeof(int64_t));
    {
        int64_t * dataCopy = data;
        int64_t * data = dataCopy;
        if (data != NULL)
        {
            data[0] = 5LL;
            printLongLongLine(data[0]);
            free(data);
        }
    }
}
