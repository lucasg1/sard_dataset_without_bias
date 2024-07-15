void FUN0(int64_t * * dataPtr);
void FUN1()
{
    int64_t * data;
    data = NULL; 
    data = (int64_t *)calloc(1, sizeof(int64_t));
    FUN0(&data);
}
void FUN0(int64_t * * dataPtr)
{
    int64_t * data = *dataPtr;
<START>
    data[0] = 5LL;
<END>
    printLongLongLine(data[0]);
    free(data);
}
