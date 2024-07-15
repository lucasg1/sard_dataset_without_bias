namespace NAMESPACE0
{
void FUN0(int * &data)
{
    data = new int[50];
}
} 
namespace NAMESPACE0
{
void FUN0(int * &data);
void FUN2()
{
    int * data;
    data = NULL;
    FUN0(data);
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
