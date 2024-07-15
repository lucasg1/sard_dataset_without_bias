void FUN0()
{
    if(GLOBAL_CONST_TRUE)
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
