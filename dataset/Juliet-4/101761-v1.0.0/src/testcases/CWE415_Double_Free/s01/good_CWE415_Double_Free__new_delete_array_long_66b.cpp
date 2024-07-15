namespace NAMESPACE0
{
void FUN0(long * dataArray[]);
void FUN1()
{
    long * data;
    long * dataArray[5];
    data = NULL;
    data = new long[100];
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(long * dataArray[]);
void FUN3()
{
    long * data;
    long * dataArray[5];
    data = NULL;
    data = new long[100];
    delete [] data;
    dataArray[2] = data;
    FUN2(dataArray);
}
} 
namespace NAMESPACE0
{
void FUN0(long * dataArray[])
{
    long * data = dataArray[2];
    delete [] data;
}
void FUN2(long * dataArray[])
{
    long * data = dataArray[2];
    ; 
}
} 
