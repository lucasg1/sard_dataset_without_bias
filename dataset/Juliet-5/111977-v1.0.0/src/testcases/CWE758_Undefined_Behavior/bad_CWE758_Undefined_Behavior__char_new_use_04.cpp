static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    if(STATIC_CONST_TRUE)
    {
        {
            char * pointer = new char;
<START>
            char data = *pointer; 
<END>
            delete pointer;
            printHexCharLine(data);
        }
    }
}
} 
