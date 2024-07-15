static int64_t * FUN0(int64_t * data)
{
    data = (int64_t *)realloc(data, 1*sizeof(int64_t));
    return data;
}
void FUN1()
{
    int64_t * data;
    data = NULL; 
    data = FUN0(data);
<START>
    data[0] = 5LL;
<END>
    printLongLongLine(data[0]);
    free(data);
}
