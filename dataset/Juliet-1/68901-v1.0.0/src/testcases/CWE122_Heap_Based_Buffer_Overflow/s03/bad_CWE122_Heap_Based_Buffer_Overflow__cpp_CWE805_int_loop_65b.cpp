namespace NAMESPACE0
{
void FUN0(int * data);
void FUN1()
{
    int * data;
    void (*funcPtr) (int *) = FUN0;
    data = NULL;
    data = new int[50];
    funcPtr(data);
}
} 
namespace NAMESPACE0
{
void FUN0(int * data)
{
    {
        int source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
<START>
                data[i] = source[i];
<END>
            }
            printIntLine(data[0]);
            delete [] data;
        }
    }
}
} 
