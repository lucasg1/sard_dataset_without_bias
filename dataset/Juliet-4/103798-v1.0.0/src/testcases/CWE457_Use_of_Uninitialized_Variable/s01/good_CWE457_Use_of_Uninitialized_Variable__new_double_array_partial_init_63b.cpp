namespace NAMESPACE0
{
void FUN0(double * * data);
void FUN1()
{
    double * data;
    data = new double[10];
    {
        int i;
        for(i=0; i<10; i++)
        {
            data[i] = (double)i;
        }
    }
    FUN0(&data);
}
void FUN2(double * * data);
void FUN3()
{
    double * data;
    data = new double[10];
    {
        int i;
        for(i=0; i<(10/2); i++)
        {
            data[i] = (double)i;
        }
    }
    FUN2(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(double * * dataPtr)
{
    double * data = *dataPtr;
    {
        int i;
        for(i=0; i<10; i++)
        {
            printDoubleLine(data[i]);
        }
    }
    delete [] data;
}
void FUN2(double * * dataPtr)
{
    double * data = *dataPtr;
    {
        int i;
        for(i=0; i<10; i++)
        {
            data[i] = (double)i;
        }
    }
    {
        int i;
        for(i=0; i<10; i++)
        {
            printDoubleLine(data[i]);
        }
    }
    delete [] data;
}
} 
