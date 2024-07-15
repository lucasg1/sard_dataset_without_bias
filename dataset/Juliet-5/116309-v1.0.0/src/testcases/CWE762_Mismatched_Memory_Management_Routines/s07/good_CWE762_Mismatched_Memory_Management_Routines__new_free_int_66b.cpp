namespace NAMESPACE0
{
void FUN0(int * dataArray[]);
void FUN1()
{
    int * data;
    int * dataArray[5];
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(int * dataArray[]);
void FUN3()
{
    int * data;
    int * dataArray[5];
    data = NULL;
    data = new int;
    dataArray[2] = data;
    FUN2(dataArray);
}
} 
namespace NAMESPACE0
{
void FUN0(int * dataArray[])
{
    int * data = dataArray[2];
    free(data);
}
void FUN2(int * dataArray[])
{
    int * data = dataArray[2];
    delete data;
}
} 
