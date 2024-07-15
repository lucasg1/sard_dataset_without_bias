namespace NAMESPACE0
{
void FUN0()
{
    if(globalFive==5)
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
} 
