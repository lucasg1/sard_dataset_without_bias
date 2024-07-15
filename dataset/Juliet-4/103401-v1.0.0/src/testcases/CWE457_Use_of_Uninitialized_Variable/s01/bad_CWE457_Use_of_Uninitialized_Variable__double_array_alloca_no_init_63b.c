void FUN0(double * * dataPtr);
void FUN1()
{
    double * data;
    data = (double *)ALLOCA(10*sizeof(double));
    ; 
    FUN0(&data);
}
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
}
