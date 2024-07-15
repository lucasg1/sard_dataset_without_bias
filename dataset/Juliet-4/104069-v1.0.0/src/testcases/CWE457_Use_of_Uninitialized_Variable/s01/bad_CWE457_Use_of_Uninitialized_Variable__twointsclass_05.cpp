static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass data;
    if(staticTrue)
    {
        ; 
    }
    if(staticTrue)
    {
<START>
        printIntLine(data.intOne);
        printIntLine(data.intTwo);
<END>
    }
}
} 
