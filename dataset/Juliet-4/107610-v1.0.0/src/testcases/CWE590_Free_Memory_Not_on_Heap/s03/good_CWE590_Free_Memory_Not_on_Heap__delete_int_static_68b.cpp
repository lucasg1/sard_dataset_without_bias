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
        int * dataBuffer = new int;
        *dataBuffer = 5;
        data = dataBuffer;
    }
    VAR1 = data;
    FUN0();
}
} 
extern int * VAR0;
extern int * VAR1;
namespace NAMESPACE2
{
void FUN0()
{
    int * data = VAR1;
    printIntLine(*data);
    delete data;
}
} 
