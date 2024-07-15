static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new int[100];
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(STATIC_CONST_TRUE)
    {
<START>
<END>
        ; 
    }
}
} 
