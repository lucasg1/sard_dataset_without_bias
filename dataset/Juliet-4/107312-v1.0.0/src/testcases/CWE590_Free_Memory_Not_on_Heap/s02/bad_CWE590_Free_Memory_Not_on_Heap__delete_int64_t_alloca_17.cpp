namespace NAMESPACE0
{
void FUN0()
{
    int i;
    int64_t * data;
    data = NULL; 
    for(i = 0; i < 1; i++)
    {
        {
            int64_t * dataBuffer = (int64_t *)ALLOCA(sizeof(int64_t));
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
