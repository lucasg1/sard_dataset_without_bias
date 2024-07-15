void FUN0(void * dataVoidPtr);
void FUN1()
{
    int64_t data;
    data = 0LL;
    fscanf (stdin, "%lld", &data);
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    int64_t * dataPtr = (int64_t *)dataVoidPtr;
    int64_t data = (*dataPtr);
    if(data < 0) 
    {
<START>
        int64_t result = data * 2;
<END>
        printLongLongLine(result);
    }
}
