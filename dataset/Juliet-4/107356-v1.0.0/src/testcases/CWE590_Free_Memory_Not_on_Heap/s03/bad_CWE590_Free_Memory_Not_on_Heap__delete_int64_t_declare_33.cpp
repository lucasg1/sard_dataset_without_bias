namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    int64_t * &dataRef = data;
    data = NULL; 
    {
        int64_t dataBuffer;
        dataBuffer = 5LL;
        data = &dataBuffer;
    }
    {
        int64_t * data = dataRef;
        printLongLongLine(*data);
<START>
        delete data;
<END>
    }
}
} 
