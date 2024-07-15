namespace NAMESPACE0
{
void FUN0()
{
    switch(6)
    {
    case 6:
    {
        double * * pointer = new double *;
<START>
        double * data = *pointer; 
<END>
        delete pointer;
        printDoubleLine(*data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
