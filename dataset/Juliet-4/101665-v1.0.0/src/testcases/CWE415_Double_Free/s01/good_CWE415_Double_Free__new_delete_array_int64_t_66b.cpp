namespace NAMESPACE0
{
void FUN0(int64_t * dataArray[]);
void FUN1()
{
    int64_t * data;
    int64_t * dataArray[5];
    data = NULL;
    data = new int64_t[100];
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(int64_t * dataArray[]);
void FUN3()
{
    int64_t * data;
    int64_t * dataArray[5];
    data = NULL;
    data = new int64_t[100];
    delete [] data;
    dataArray[2] = data;
    FUN2(dataArray);
}
} 
namespace NAMESPACE0
{
void FUN0(int64_t * dataArray[])
{
    int64_t * data = dataArray[2];
    delete [] data;
}
void FUN2(int64_t * dataArray[])
{
    int64_t * data = dataArray[2];
    ; 
}
} 
