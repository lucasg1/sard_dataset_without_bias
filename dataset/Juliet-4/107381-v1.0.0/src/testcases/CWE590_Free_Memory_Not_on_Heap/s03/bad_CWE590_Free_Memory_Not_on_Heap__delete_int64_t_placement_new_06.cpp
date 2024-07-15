static const int STATIC_CONST_FIVE = 5;
namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL; 
    if(STATIC_CONST_FIVE==5)
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
