static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    double * data;
    data = new double[10];
    if(STATIC_CONST_TRUE)
    {
        ; 
    }
    if(STATIC_CONST_TRUE)
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
