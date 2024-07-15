static int staticFive = 5;
void FUN0()
{
    double * data;
    data = (double *)ALLOCA(10*sizeof(double));
    if(staticFive==5)
    {
        ; 
    }
    if(staticFive==5)
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
