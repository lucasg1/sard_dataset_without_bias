static const int STATIC_CONST_FIVE = 5;
namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new int[100];
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
