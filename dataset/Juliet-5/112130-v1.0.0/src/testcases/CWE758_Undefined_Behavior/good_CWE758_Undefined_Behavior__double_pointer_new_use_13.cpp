namespace NAMESPACE0
{
void FUN0()
{
    if(GLOBAL_CONST_FIVE!=5)
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
    if(GLOBAL_CONST_FIVE==5)
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
