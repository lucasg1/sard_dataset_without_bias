namespace NAMESPACE0
{
void FUN0(double * &data)
{
    {
        int i;
        for(i=0; i<10; i++)
        {
            data[i] = (double)i;
        }
    }
}
void FUN1(double * &data)
{
    {
        int i;
        for(i=0; i<(10/2); i++)
        {
            data[i] = (double)i;
        }
    }
}
} 
namespace NAMESPACE0
{
void FUN0(double * &data);
void FUN3()
{
    double * data;
    data = new double[10];
    FUN0(data);
    {
        int i;
        for(i=0; i<10; i++)
        {
            printDoubleLine(data[i]);
        }
    }
    delete [] data;
}
void FUN1(double * &data);
void FUN5()
{
    double * data;
    data = new double[10];
    FUN1(data);
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
