void FUN0(int64_t * data);
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)malloc(sizeof(data));
    *data = 2147483643LL;
    FUN0(data);
}
void FUN2(int64_t * data);
void FUN0(int64_t * data)
{
    FUN2(data);
}
void FUN4(int64_t * data);
void FUN2(int64_t * data)
{
    FUN4(data);
}
void FUN4(int64_t * data)
{
<START>
    printLongLongLine(*data);
<END>
    free(data);
}
