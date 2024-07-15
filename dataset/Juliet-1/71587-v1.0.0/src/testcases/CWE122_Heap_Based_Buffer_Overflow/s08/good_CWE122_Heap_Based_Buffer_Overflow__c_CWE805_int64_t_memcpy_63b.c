void FUN0(int64_t * * data);
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    FUN0(&data);
}
void FUN0(int64_t * * dataPtr)
{
    int64_t * data = *dataPtr;
    {
        int64_t source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
        free(data);
    }
}
