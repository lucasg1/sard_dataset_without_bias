static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL; 
    if(STATIC_CONST_TRUE)
    {
        {
            char buffer[sizeof(int)];
            int * dataBuffer = new(buffer) int;
            *dataBuffer = 5;
            data = dataBuffer;
        }
    }
    printIntLine(*data);
<START>
    delete data;
<END>
}
} 
