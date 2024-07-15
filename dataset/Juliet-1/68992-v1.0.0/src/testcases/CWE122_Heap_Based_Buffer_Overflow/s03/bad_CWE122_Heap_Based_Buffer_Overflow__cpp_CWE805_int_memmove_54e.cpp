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
void FUN0(int * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN1(int * data);
void FUN5(int * data)
{
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN5(int * data);
void FUN7()
{
    int * data;
    data = NULL;
    data = new int[50];
    FUN5(data);
}
} 
namespace NAMESPACE0
{
void FUN2(int * data)
{
    {
        int source[100] = {0}; 
<START>
        memmove(data, source, 100*sizeof(int));
<END>
        printIntLine(data[0]);
        delete [] data;
    }
}
} 
