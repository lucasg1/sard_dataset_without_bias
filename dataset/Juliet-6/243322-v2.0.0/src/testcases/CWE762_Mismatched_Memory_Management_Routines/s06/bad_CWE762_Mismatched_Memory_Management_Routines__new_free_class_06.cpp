static const int STATIC_CONST_FIVE = 5;
namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new TwoIntsClass;
    }
    if(STATIC_CONST_FIVE==5)
    {
<START>
        free(data);
<END>
    }
}
} 
