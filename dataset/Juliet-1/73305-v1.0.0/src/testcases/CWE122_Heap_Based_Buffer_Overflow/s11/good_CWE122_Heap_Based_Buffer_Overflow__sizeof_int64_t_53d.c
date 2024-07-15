void FUN0(int64_t * data);
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)malloc(sizeof(*data));
    *data = 2147483643LL;
    FUN0(data);
}
void FUN3(int64_t * data);
void FUN0(int64_t * data)
{
    FUN3(data);
}
void FUN5(int64_t * data);
void FUN3(int64_t * data)
{
    FUN5(data);
}
void FUN5(int64_t * data)
{
    printLongLongLine(*data);
    free(data);
}
