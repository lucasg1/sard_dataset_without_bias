namespace NAMESPACE0
{
int * FUN0(int * data)
{
    data = new int[100];
    return data;
}
} 
namespace NAMESPACE0
{
int * FUN0(int * data);
void FUN2()
{
    int * data;
    data = NULL;
    data = FUN0(data);
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
