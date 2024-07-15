namespace NAMESPACE0
{
void FUN0()
{
    double * data;
    data = new double[10];
    ; 
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
