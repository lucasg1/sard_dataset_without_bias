namespace NAMESPACE0
{
void FUN0(double * * dataPtr);
void FUN1()
{
    double * data;
    data = new double[10];
    ; 
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(double * * dataPtr)
{
    double * data = *dataPtr;
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
