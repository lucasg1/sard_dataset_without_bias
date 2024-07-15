namespace NAMESPACE0
{
void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL;
    data = new int[100];
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN3(int * data);
void FUN0(int * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN3(int * data)
{
    {
        int source[100] = {0}; 
        memmove(data, source, 100*sizeof(int));
        printIntLine(data[0]);
        delete [] data;
    }
}
} 
