static const int STATIC_CONST_FIVE = 5;
namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new TwoIntsClass[100];
        delete [] data;
    }
    if(STATIC_CONST_FIVE==5)
    {
<START>
        delete [] data;
<END>
    }
}
} 
