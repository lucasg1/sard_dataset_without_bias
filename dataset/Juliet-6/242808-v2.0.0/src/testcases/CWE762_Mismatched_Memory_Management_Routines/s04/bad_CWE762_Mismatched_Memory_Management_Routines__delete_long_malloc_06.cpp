static const int STATIC_CONST_FIVE = 5;
namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    if(STATIC_CONST_FIVE==5)
    {
<START>
        delete data;
<END>
    }
}
} 
