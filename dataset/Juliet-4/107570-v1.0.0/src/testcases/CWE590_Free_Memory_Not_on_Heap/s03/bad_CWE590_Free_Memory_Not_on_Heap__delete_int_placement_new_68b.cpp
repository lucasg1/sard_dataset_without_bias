int * VAR0;
int * VAR1;
namespace NAMESPACE2
{
void FUN0();
void FUN1()
{
    int * data;
    data = NULL; 
    {
        char buffer[sizeof(int)];
        int * dataBuffer = new(buffer) int;
        *dataBuffer = 5;
        data = dataBuffer;
    }
    VAR0 = data;
    FUN0();
}
} 
extern int * VAR0;
extern int * VAR1;
namespace NAMESPACE2
{
void FUN0()
{
    int * data = VAR0;
    printIntLine(*data);
<START>
    delete data;
<END>
}
} 
