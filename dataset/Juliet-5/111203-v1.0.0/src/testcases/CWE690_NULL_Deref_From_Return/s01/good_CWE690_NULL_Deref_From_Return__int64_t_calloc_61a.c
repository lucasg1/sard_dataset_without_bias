int64_t * FUN0(int64_t * data)
{
    data = (int64_t *)calloc(1, sizeof(int64_t));
    return data;
}
int64_t * FUN0(int64_t * data);
void FUN2()
{
    int64_t * data;
    data = NULL; 
    data = FUN0(data);
    if (data != NULL)
    {
        data[0] = 5LL;
        printLongLongLine(data[0]);
        free(data);
    }
}
