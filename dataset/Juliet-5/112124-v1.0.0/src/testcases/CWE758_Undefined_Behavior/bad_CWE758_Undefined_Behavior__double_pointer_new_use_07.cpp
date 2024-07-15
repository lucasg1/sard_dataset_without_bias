static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    if(staticFive==5)
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
