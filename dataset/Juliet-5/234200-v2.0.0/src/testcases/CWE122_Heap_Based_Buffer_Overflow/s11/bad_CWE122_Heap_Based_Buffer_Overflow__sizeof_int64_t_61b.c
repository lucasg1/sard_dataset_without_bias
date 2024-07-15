int64_t * FUN0(int64_t * data);
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = FUN0(data);
    printLongLongLine(*data);
    free(data);
}
int64_t * FUN0(int64_t * data)
{
    data = (int64_t *)malloc(sizeof(data));
<START>
    if (data == NULL) {exit(-1);}
<END>
    *data = 2147483643LL;
    return data;
}
