void FUN0(int64_t * data);
void FUN1(int64_t * data)
{
    FUN0(data);
}
void FUN1(int64_t * data);
void FUN3()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)malloc(sizeof(data));
    *data = 2147483643LL;
    FUN1(data);
}
void FUN0(int64_t * data)
{
<START>
    printLongLongLine(*data);
<END>
    free(data);
}
