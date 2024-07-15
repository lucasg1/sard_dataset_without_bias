static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    double * data;
    data = new double[10];
    if(staticFive==5)
    {
        {
            int i;
            for(i=0; i<(10/2); i++)
            {
                data[i] = (double)i;
            }
        }
    }
    if(staticFive==5)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
<START>
                printDoubleLine(data[i]);
<END>
            }
        }
        delete [] data;
    }
}
} 
