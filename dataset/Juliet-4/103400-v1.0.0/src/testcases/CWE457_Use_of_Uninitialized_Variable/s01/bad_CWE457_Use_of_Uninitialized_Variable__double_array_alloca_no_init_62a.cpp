namespace NAMESPACE0
{
void FUN0(double * &data)
{
    ; 
}
} 
namespace NAMESPACE0
{
void FUN0(double * &data);
void FUN2()
{
    double * data;
    data = (double *)ALLOCA(10*sizeof(double));
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
}
} 
