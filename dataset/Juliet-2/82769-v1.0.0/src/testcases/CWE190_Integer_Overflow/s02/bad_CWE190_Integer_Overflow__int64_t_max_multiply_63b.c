void FUN0(int64_t * dataPtr);
void FUN1()
{
    int64_t data;
    data = 0LL;
    data = LLONG_MAX;
    FUN0(&data);
}
void FUN0(int64_t * dataPtr)
{
    int64_t data = *dataPtr;
    if(data > 0) 
    {
<START>
        int64_t result = data * 2;
<END>
        printLongLongLine(result);
    }
}
