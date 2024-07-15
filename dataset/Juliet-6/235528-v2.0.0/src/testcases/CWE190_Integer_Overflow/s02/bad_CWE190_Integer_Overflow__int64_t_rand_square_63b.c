void FUN0(int64_t * dataPtr);
void FUN1()
{
    int64_t data;
    data = 0LL;
    data = (int64_t)RAND64();
    FUN0(&data);
}
void FUN0(int64_t * dataPtr)
{
    int64_t data = *dataPtr;
    {
<START>
        int64_t result = data * data;
<END>
        printLongLongLine(result);
    }
}
