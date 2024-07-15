static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    double * data;
    data = (double *)malloc(10*sizeof(double));
    if (data == NULL) {exit(-1);}
    if(staticTrue)
    {
        ; 
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
