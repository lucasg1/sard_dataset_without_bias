void FUN0(void * dataVoidPtr);
void FUN1()
{
    double * data;
    data = (double *)ALLOCA(10*sizeof(double));
    {
        int i;
        for(i=0; i<(10/2); i++)
        {
            data[i] = (double)i;
        }
    }
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    double * * dataPtr = (double * *)dataVoidPtr;
    double * data = (*dataPtr);
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
