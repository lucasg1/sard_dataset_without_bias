static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
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
