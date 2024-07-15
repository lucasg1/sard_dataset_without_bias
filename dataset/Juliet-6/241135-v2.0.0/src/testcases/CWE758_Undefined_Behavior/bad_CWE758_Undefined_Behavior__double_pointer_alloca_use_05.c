static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
        {
            double * * pointer = (double * *)ALLOCA(sizeof(double *));
<START>
            double * data = *pointer; 
<END>
            printDoubleLine(*data);
        }
    }
}
