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
            char buffer[sizeof(int64_t)];
            int64_t * dataBuffer = new(buffer) int64_t;
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
