namespace NAMESPACE0
{
void FUN0()
{
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
