int * VAR0;
int * VAR1;
namespace NAMESPACE2
{
void FUN0();
void FUN1()
{
    int * data;
    data = NULL;
    data = new int[50];
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
    {
        int source[100] = {0}; 
<START>
        memmove(data, source, 100*sizeof(int));
<END>
        printIntLine(data[0]);
        delete [] data;
    }
}
} 
