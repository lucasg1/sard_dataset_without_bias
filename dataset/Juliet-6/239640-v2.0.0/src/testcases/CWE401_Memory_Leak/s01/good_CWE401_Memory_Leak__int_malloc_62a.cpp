namespace NAMESPACE0
{
void FUN0(int * &data)
{
    data = (int *)ALLOCA(100*sizeof(int));
    data[0] = 5;
    printIntLine(data[0]);
}
void FUN1(int * &data)
{
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    data[0] = 5;
    printIntLine(data[0]);
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
    ; 
}
void FUN1(int * &data);
void FUN5()
{
    int * data;
    data = NULL;
    FUN1(data);
    free(data);
}
} 
