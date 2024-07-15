namespace NAMESPACE0
{
void FUN0(int * dataArray[]);
void FUN1()
{
    int * data;
    int * dataArray[5];
    data = NULL;
    data = new int[100];
    dataArray[2] = data;
    FUN0(dataArray);
}
} 
namespace NAMESPACE0
{
void FUN0(int * dataArray[])
{
    int * data = dataArray[2];
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
