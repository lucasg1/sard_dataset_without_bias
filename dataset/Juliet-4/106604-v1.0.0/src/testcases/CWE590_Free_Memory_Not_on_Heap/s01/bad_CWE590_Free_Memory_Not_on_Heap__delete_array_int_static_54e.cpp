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
void FUN2(int * data);
void FUN0(int * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN1(int * data);
void FUN5(int * data)
{
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN5(int * data);
void FUN7()
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
    FUN5(data);
}
} 
namespace NAMESPACE0
{
void FUN2(int * data)
{
    printIntLine(data[0]);
<START>
    delete [] data;
<END>
}
} 
