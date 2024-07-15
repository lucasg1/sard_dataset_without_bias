static const int STATIC_CONST_FIVE = 5;
namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = (TwoIntsClass *)calloc(100, sizeof(TwoIntsClass));
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
