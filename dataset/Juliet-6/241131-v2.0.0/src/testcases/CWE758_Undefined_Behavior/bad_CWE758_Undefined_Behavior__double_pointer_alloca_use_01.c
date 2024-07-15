void FUN0()
{
    {
        double * * pointer = (double * *)ALLOCA(sizeof(double *));
<START>
        double * data = *pointer; 
<END>
        printDoubleLine(*data);
    }
}
