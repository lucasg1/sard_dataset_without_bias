namespace NAMESPACE0
{
void FUN0()
{
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            double * data;
            data = new double;
            *data = 5.0;
            double * * pointer = new double *;
            *pointer = data; 
            {
                double * data = *pointer;
                printDoubleLine(*data);
            }
            delete pointer;
        }
    }
}
void FUN1()
{
    if(globalReturnsTrue())
    {
        {
            double * data;
            data = new double;
            *data = 5.0;
            double * * pointer = new double *;
            *pointer = data; 
            {
                double * data = *pointer;
                printDoubleLine(*data);
            }
            delete pointer;
        }
    }
}
} 
