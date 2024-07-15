static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
namespace NAMESPACE0
{
void FUN2()
{
    double * data;
    data = new double[10];
    if(FUN0())
    {
        ; 
    }
    if(FUN0())
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
