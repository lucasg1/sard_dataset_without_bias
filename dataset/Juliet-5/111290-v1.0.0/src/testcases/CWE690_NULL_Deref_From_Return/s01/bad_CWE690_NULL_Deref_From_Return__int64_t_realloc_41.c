void FUN0(int64_t * data)
{
<START>
    data[0] = 5LL;
<END>
    printLongLongLine(data[0]);
    free(data);
}
void FUN1()
{
    int64_t * data;
    data = NULL; 
    data = (int64_t *)realloc(data, 1*sizeof(int64_t));
    FUN0(data);
}
