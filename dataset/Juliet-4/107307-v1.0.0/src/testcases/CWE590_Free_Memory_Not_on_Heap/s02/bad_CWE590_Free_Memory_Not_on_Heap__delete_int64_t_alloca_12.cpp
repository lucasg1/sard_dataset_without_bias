namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL; 
    if(globalReturnsTrueOrFalse())
    {
        {
            int64_t * dataBuffer = (int64_t *)ALLOCA(sizeof(int64_t));
            *dataBuffer = 5LL;
            data = dataBuffer;
        }
    }
    else
    {
        {
            int64_t * dataBuffer = new int64_t;
            *dataBuffer = 5LL;
            data = dataBuffer;
        }
    }
    printLongLongLine(*data);
<START>
    delete data;
<END>
}
} 
