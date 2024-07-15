namespace NAMESPACE0
{
void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL; 
    {
        int * dataBuffer = new int[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5;
            }
        }
        data = dataBuffer;
    }
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN3(int * data);
void FUN0(int * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN3(int * data)
{
    printIntLine(data[0]);
    delete [] data;
}
} 
