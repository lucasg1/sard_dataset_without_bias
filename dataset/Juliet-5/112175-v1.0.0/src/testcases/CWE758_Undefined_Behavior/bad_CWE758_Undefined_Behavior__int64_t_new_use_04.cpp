static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    if(STATIC_CONST_TRUE)
    {
        {
            int64_t * pointer = new int64_t;
<START>
            int64_t data = *pointer; 
<END>
            delete pointer;
            printLongLongLine(data);
        }
    }
}
} 
