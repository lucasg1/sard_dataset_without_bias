namespace NAMESPACE0
{
void FUN0(int * &data)
{
    {
        int i;
        for(i=0; i<10; i++)
        {
            data[i] = i;
        }
    }
}
void FUN1(int * &data)
{
    ; 
}
} 
namespace NAMESPACE0
{
void FUN0(int * &data);
void FUN3()
{
    int * data;
    data = (int *)malloc(10*sizeof(int));
    FUN0(data);
    {
        int i;
        for(i=0; i<10; i++)
        {
            printIntLine(data[i]);
        }
    }
}
void FUN1(int * &data);
void FUN5()
{
    int * data;
    data = (int *)malloc(10*sizeof(int));
    FUN1(data);
    {
        int i;
        for(i=0; i<10; i++)
        {
            data[i] = i;
        }
    }
    {
        int i;
        for(i=0; i<10; i++)
        {
            printIntLine(data[i]);
        }
    }
}
} 
