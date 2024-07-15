void FUN0(int64_t * data);
void FUN1(int64_t * data)
{
    FUN0(data);
}
void FUN2(int64_t * data);
void FUN0(int64_t * data)
{
    FUN2(data);
}
void FUN1(int64_t * data);
void FUN5()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)malloc(sizeof(*data));
    *data = 2147483643LL;
    FUN1(data);
}
void FUN7(int64_t * data);
void FUN2(int64_t * data)
{
    FUN7(data);
}
void FUN7(int64_t * data)
{
    printLongLongLine(*data);
    free(data);
}
