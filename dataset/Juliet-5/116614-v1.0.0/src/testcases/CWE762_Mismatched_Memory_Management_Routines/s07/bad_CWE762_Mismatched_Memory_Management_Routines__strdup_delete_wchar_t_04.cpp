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
        {
            wchar_t myString[] = L"myString";
            data = wcsdup(myString);
        }
    }
    if(STATIC_CONST_TRUE)
    {
<START>
        delete data;
<END>
    }
}
} 
