namespace NAMESPACE0
{
void FUN0(double * &data)
{
    ; 
}
void FUN1()
{
    double * data;
    data = (double *)malloc(10*sizeof(double));
    if (data == NULL) {exit(-1);}
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
