namespace NAMESPACE0
{
int64_t * FUN0(int64_t * data)
{
    data = new int64_t[50];
    return data;
}
} 
namespace NAMESPACE0
{
int64_t * FUN0(int64_t * data);
void FUN2()
{
    int64_t * data;
    data = NULL;
    data = FUN0(data);
    {
        int64_t source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
<START>
                data[i] = source[i];
<END>
            }
            printLongLongLine(data[0]);
            delete [] data;
        }
    }
}
} 
