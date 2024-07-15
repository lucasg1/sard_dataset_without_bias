static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
namespace NAMESPACE0
{
void FUN2()
{
    if(FUN1())
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
void FUN3()
{
    if(FUN0())
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
