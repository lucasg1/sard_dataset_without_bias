void FUN0()
{
    double * data;
    data = (double *)ALLOCA(10*sizeof(double));
    if(globalFive==5)
    {
        ; 
    }
    if(globalFive==5)
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
    }
}
