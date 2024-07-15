void FUN0()
{
    double * data;
    data = (double *)ALLOCA(10*sizeof(double));
    goto source;
source:
    ; 
    goto sink;
sink:
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
