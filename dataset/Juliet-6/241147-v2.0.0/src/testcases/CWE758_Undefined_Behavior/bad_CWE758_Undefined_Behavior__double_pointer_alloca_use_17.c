void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
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
