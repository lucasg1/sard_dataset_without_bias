namespace NAMESPACE0
{
void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
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
