namespace NAMESPACE0
{
void FUN0(int * * data);
void FUN1()
{
    int * data;
    data = NULL;
    data = new int[100];
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(int * * dataPtr)
{
    int * data = *dataPtr;
    {
        int source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printIntLine(data[0]);
            delete [] data;
        }
    }
}
} 
