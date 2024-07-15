void FUN0()
{
    double * data;
    data = (double *)malloc(10*sizeof(double));
    if (data == NULL) {exit(-1);}
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
