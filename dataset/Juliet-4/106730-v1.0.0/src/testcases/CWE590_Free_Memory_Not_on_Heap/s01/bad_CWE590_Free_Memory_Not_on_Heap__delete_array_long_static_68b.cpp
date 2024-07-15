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
        static long dataBuffer[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5L;
            }
        }
        data = dataBuffer;
    }
    VAR0 = data;
    FUN0();
}
} 
extern long * VAR0;
extern long * VAR1;
namespace NAMESPACE2
{
void FUN0()
{
    long * data = VAR0;
    printLongLine(data[0]);
<START>
    delete [] data;
<END>
}
} 
