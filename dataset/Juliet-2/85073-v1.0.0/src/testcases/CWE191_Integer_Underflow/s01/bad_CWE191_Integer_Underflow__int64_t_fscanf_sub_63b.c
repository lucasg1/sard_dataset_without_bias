void FUN0(int64_t * dataPtr);
void FUN1()
{
    int64_t data;
    data = 0LL;
    fscanf (stdin, "%lld", &data);
    FUN0(&data);
}
void FUN0(int64_t * dataPtr)
{
    int64_t data = *dataPtr;
    {
<START>
        int64_t result = data - 1;
<END>
        printLongLongLine(result);
    }
}
