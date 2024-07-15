namespace NAMESPACE0
{
void FUN0()
{
    goto sink;
sink:
    {
        double * * pointer = new double *;
<START>
        double * data = *pointer; 
<END>
        delete pointer;
        printDoubleLine(*data);
    }
}
} 
