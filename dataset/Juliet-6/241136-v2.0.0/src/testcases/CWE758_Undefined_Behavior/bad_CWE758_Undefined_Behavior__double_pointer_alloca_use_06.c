static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
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
