static const int STATIC_CONST_FIVE = 5;
namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL; 
    if(STATIC_CONST_FIVE==5)
    {
        {
            char buffer[sizeof(long)];
            long * dataBuffer = new(buffer) long;
            *dataBuffer = 5L;
            data = dataBuffer;
        }
    }
    printLongLine(*data);
<START>
    delete data;
<END>
}
} 
