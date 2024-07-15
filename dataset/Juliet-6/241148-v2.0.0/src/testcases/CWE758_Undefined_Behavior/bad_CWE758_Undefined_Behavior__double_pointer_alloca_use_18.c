void FUN0()
{
    goto sink;
sink:
    {
        double * * pointer = (double * *)ALLOCA(sizeof(double *));
<START>
        double * data = *pointer; 
<END>
        printDoubleLine(*data);
    }
}
