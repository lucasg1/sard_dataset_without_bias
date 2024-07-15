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
        int64_t * dataBuffer = new int64_t;
        *dataBuffer = 5LL;
        data = dataBuffer;
    }
    VAR1 = data;
    FUN0();
}
} 
extern int64_t * VAR0;
extern int64_t * VAR1;
namespace NAMESPACE2
{
void FUN0()
{
    int64_t * data = VAR1;
    printLongLongLine(*data);
    delete data;
}
} 
