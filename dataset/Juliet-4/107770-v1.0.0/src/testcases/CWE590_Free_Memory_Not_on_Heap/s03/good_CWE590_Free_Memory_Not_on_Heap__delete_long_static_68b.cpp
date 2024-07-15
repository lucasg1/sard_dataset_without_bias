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
        long * dataBuffer = new long;
        *dataBuffer = 5L;
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
    printLongLine(*data);
    delete data;
}
} 
