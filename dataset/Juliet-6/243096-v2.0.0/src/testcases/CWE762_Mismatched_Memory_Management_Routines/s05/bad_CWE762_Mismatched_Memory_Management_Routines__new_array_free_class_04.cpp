static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new TwoIntsClass[100];
    }
    if(STATIC_CONST_TRUE)
    {
<START>
        free(data);
<END>
    }
}
} 
