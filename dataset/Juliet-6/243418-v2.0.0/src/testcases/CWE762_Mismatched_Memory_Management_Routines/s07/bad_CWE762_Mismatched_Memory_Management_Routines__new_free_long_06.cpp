static const int STATIC_CONST_FIVE = 5;
namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new long;
    }
    if(STATIC_CONST_FIVE==5)
    {
<START>
        free(data);
<END>
    }
}
} 
