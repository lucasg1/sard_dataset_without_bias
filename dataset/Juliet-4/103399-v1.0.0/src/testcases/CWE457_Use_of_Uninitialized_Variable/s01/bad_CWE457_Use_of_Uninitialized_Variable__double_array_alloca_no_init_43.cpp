namespace NAMESPACE0
{
void FUN0(double * &data)
{
    ; 
}
void FUN1()
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
