static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass data;
    if(STATIC_CONST_TRUE)
    {
        ; 
    }
    if(STATIC_CONST_TRUE)
    {
<START>
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
<END>
    }
}
} 
