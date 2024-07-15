static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    if(STATIC_CONST_TRUE)
    {
        {
            wchar_t * * pointer = new wchar_t *;
<START>
            wchar_t * data = *pointer; 
<END>
            delete pointer;
            printWLine(data);
        }
    }
}
} 
