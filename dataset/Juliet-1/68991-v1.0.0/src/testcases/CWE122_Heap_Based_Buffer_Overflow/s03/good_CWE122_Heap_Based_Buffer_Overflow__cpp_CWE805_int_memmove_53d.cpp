namespace NAMESPACE0
{
void FUN0(int * data);
void FUN1(int * data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN2(int * data);
void FUN3()
{
    int * data;
    data = NULL;
    data = new int[100];
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN1(int * data);
void FUN2(int * data)
{
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN0(int * data)
{
    {
        int source[100] = {0}; 
        memmove(data, source, 100*sizeof(int));
        printIntLine(data[0]);
        delete [] data;
    }
}
} 
