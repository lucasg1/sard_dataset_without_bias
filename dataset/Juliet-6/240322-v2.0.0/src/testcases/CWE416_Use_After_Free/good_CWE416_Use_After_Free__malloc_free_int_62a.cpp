namespace NAMESPACE0
{
void FUN0(int * &data)
{
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5;
        }
    }
}
void FUN1(int * &data)
{
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5;
        }
    }
    free(data);
}
} 
namespace NAMESPACE0
{
void FUN0(int * &data);
void FUN3()
{
    int * data;
    data = NULL;
    FUN0(data);
    printIntLine(data[0]);
}
void FUN1(int * &data);
void FUN5()
{
    int * data;
    data = NULL;
    FUN1(data);
    ; 
}
} 
