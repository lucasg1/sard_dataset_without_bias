namespace NAMESPACE0
{
void FUN0(long * data);
void FUN1(long * data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN1(long * data);
void FUN3()
{
    long * data;
    data = NULL; 
    {
        long * dataBuffer = (long *)ALLOCA(100*sizeof(long));
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5L;
            }
        }
        data = dataBuffer;
    }
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN4(long * data);
void FUN5(long * data)
{
    FUN4(data);
}
} 
namespace NAMESPACE0
{
void FUN5(long * data);
void FUN0(long * data)
{
    FUN5(data);
}
} 
namespace NAMESPACE0
{
void FUN4(long * data)
{
    printLongLine(data[0]);
<START>
    delete [] data;
<END>
}
} 
