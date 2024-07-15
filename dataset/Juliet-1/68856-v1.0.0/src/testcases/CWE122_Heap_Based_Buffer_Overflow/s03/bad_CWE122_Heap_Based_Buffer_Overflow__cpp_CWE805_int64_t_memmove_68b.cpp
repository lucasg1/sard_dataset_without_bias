int64_t * VAR0;
int64_t * VAR1;
namespace NAMESPACE2
{
void FUN0();
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = new int64_t[50];
    VAR0 = data;
    FUN0();
}
} 
extern int64_t * VAR0;
extern int64_t * VAR1;
namespace NAMESPACE2
{
void FUN0()
{
    int64_t * data = VAR0;
    {
        int64_t source[100] = {0}; 
<START>
        memmove(data, source, 100*sizeof(int64_t));
<END>
        printLongLongLine(data[0]);
        delete [] data;
    }
}
} 
