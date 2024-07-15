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
    ; 
}
} 
namespace NAMESPACE0
{
void FUN0(double * &data);
void FUN3()
{
    double * data;
    data = (double *)ALLOCA(10*sizeof(double));
    FUN0(data);
    {
        int i;
        for(i=0; i<10; i++)
        {
            printDoubleLine(data[i]);
        }
    }
}
void FUN1(double * &data);
void FUN5()
{
    double * data;
    data = (double *)ALLOCA(10*sizeof(double));
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
}
} 
