void FUN0(int64_t * data);
void FUN1()
{
    int64_t * data;
    data = NULL; 
    data = (int64_t *)realloc(data, 1*sizeof(int64_t));
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
    data[0] = 5LL;
<END>
    printLongLongLine(data[0]);
    free(data);
}
