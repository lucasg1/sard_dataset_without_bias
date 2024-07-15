int * VAR0;
int * VAR1;
namespace NAMESPACE2
{
void FUN0();
void FUN1()
{
    int * data;
    data = NULL;
    data = new int[100];
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
    {
        int source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int));
        printIntLine(data[0]);
        delete [] data;
    }
}
} 
