namespace NAMESPACE0
{
void FUN0(int64_t * &data)
{
    data = (int64_t *)malloc(100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5LL;
        }
    }
}
void FUN1(int64_t * &data)
{
    data = (int64_t *)malloc(100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5LL;
        }
    }
    free(data);
}
} 
namespace NAMESPACE0
{
void FUN0(int64_t * &data);
void FUN3()
{
    int64_t * data;
    data = NULL;
    FUN0(data);
    printLongLongLine(data[0]);
}
void FUN1(int64_t * &data);
void FUN5()
{
    int64_t * data;
    data = NULL;
    FUN1(data);
    ; 
}
} 
