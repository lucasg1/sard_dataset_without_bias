static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    if(staticTrue)
    {
        {
            double * * pointer = new double *;
<START>
            double * data = *pointer; 
<END>
            delete pointer;
            printDoubleLine(*data);
        }
    }
}
} 
