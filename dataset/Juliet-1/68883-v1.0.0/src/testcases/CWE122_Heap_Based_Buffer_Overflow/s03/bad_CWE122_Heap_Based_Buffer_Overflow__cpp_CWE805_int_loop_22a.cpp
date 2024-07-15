namespace NAMESPACE0
{
extern int VAR1;
int * FUN0(int * data)
{
    if(VAR1)
    {
        data = new int[50];
    }
    return data;
}
} 
namespace NAMESPACE0
{
int VAR1 = 0;
int * FUN0(int * data);
void FUN2()
{
    int * data;
    data = NULL;
    VAR1 = 1; 
    data = FUN0(data);
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
    ;
}
} 
