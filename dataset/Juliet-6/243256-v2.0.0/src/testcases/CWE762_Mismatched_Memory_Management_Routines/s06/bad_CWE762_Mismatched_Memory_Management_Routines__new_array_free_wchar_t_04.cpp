static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new wchar_t[100];
    }
    if(STATIC_CONST_TRUE)
    {
<START>
        free(data);
<END>
    }
}
} 
