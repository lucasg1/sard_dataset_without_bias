static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    double * data;
    data = (double *)ALLOCA(10*sizeof(double));
    if(staticTrue)
    {
        {
            int i;
            for(i=0; i<(10/2); i++)
            {
                data[i] = (double)i;
            }
        }
    }
    if(staticTrue)
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
