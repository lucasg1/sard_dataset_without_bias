namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL; 
    goto source;
source:
    {
        char buffer[sizeof(int64_t)];
        int64_t * dataBuffer = new(buffer) int64_t;
        *dataBuffer = 5LL;
        data = dataBuffer;
    }
    printLongLongLine(*data);
<START>
    delete data;
<END>
}
} 
