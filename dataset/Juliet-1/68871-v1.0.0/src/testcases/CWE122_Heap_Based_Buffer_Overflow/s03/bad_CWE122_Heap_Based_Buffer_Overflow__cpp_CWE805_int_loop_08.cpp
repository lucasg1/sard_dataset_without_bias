static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
namespace NAMESPACE0
{
void FUN2()
{
    int * data;
    data = NULL;
    if(FUN0())
    {
        data = new int[50];
    }
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
