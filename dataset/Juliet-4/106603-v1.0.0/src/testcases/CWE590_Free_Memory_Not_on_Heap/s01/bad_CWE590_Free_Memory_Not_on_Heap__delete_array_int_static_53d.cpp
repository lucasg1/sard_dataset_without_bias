namespace NAMESPACE0
{
void FUN0(int * data);
void FUN1(int * data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN1(int * data);
void FUN3()
{
    int * data;
    data = NULL; 
    {
        static int dataBuffer[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5;
            }
        }
        data = dataBuffer;
    }
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN4(int * data);
void FUN0(int * data)
{
    FUN4(data);
}
} 
namespace NAMESPACE0
{
void FUN4(int * data)
{
    printIntLine(data[0]);
<START>
    delete [] data;
<END>
}
} 
