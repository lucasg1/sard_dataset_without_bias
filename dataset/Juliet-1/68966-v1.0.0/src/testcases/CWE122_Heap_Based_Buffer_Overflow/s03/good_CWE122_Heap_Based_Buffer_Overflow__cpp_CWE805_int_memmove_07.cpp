static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int[100];
    }
    {
        int source[100] = {0}; 
        memmove(data, source, 100*sizeof(int));
        printIntLine(data[0]);
        delete [] data;
    }
}
void FUN1()
{
    int * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new int[100];
    }
    {
        int source[100] = {0}; 
        memmove(data, source, 100*sizeof(int));
        printIntLine(data[0]);
        delete [] data;
    }
}
} 
