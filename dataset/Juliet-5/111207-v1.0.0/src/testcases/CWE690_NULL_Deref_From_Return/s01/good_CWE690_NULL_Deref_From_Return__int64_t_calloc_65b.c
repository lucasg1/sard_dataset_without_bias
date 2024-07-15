void FUN0(int64_t * data);
void FUN1()
{
    int64_t * data;
    void (*funcPtr) (int64_t *) = FUN0;
    data = NULL; 
    data = (int64_t *)calloc(1, sizeof(int64_t));
    funcPtr(data);
}
void FUN0(int64_t * data)
{
    if (data != NULL)
    {
        data[0] = 5LL;
        printLongLongLine(data[0]);
        free(data);
    }
}
