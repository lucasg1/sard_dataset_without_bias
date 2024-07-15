void FUN0(int64_t * data)
{
    printLongLongLine(*data);
    free(data);
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)malloc(sizeof(*data));
    if (data == NULL) {exit(-1);}
    *data = 2147483643LL;
    FUN0(data);
}
