namespace NAMESPACE0
{
void FUN0(int64_t * &data)
{
    data = (int64_t *)malloc(sizeof(data));
    if (data == NULL) {exit(-1);}
    *data = 2147483643LL;
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    FUN0(data);
<START>
    printLongLongLine(*data);
<END>
    free(data);
}
} 
