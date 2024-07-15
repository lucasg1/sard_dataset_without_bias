namespace NAMESPACE0
{
void FUN0(int64_t * &data)
{
    data = (int64_t *)calloc(1, sizeof(int64_t));
}
void FUN1()
{
    int64_t * data;
    data = NULL; 
    FUN0(data);
    if (data != NULL)
    {
        data[0] = 5LL;
        printLongLongLine(data[0]);
        free(data);
    }
}
} 
