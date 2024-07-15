long * VAR0;
long * VAR1;
namespace NAMESPACE2
{
void FUN0();
void FUN1()
{
    long * data;
    data = NULL; 
    {
        long * dataBuffer = new long[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5L;
            }
        }
        data = dataBuffer;
    }
    VAR1 = data;
    FUN0();
}
} 
extern long * VAR0;
extern long * VAR1;
namespace NAMESPACE2
{
void FUN0()
{
    long * data = VAR1;
    printLongLine(data[0]);
    delete [] data;
}
} 
