namespace NAMESPACE0
{
void FUN0(double * &data)
{
    {
        int i;
        for(i=0; i<(10/2); i++)
        {
            data[i] = (double)i;
        }
    }
}
} 
namespace NAMESPACE0
{
void FUN0(double * &data);
void FUN2()
{
    double * data;
    data = new double[10];
    FUN0(data);
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
