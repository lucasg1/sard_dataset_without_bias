void FUN0()
{
    switch(6)
    {
    case 6:
    {
        double * * pointer = (double * *)ALLOCA(sizeof(double *));
<START>
        double * data = *pointer; 
<END>
        printDoubleLine(*data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
