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
        char buffer[sizeof(long)];
        long * dataBuffer = new(buffer) long;
        *dataBuffer = 5L;
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
    printLongLine(*data);
<START>
    delete data;
<END>
}
} 
