static const int STATIC_CONST_FIVE = 5;
namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new int64_t[100];
    }
    if(STATIC_CONST_FIVE==5)
    {
<START>
        free(data);
<END>
    }
}
} 
