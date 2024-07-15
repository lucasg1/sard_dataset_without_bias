static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new long;
    }
    if(STATIC_CONST_TRUE)
    {
<START>
        delete [] data;
<END>
    }
}
} 
