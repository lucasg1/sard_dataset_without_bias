void FUN0()
{
    double * data;
    data = (double *)ALLOCA(10*sizeof(double));
    while(1)
    {
        ; 
        break;
    }
    while(1)
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
        break;
    }
}
