int64_t * VAR0;
int64_t * VAR1;
namespace NAMESPACE2
{
void FUN0();
void FUN1()
{
    int64_t * data;
    data = NULL; 
    {
        int64_t dataBuffer;
        dataBuffer = 5LL;
        data = &dataBuffer;
    }
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
    printLongLongLine(*data);
<START>
    delete data;
<END>
}
} 
