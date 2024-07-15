static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(staticTrue)
    {
        data = new int;
        *data = 5;
        printIntLine(*data);
    }
    if(staticTrue)
    {
<START>
<END>
        ; 
    }
}
} 
