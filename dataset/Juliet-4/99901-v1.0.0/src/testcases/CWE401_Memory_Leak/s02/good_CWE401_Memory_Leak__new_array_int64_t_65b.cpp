namespace NAMESPACE0
{
void FUN0(int64_t * data);
void FUN1()
{
    int64_t * data;
    void (*funcPtr) (int64_t *) = FUN0;
    data = NULL;
    int64_t VAR1[100];
    data = VAR1;
    data[0] = 5LL;
    printLongLongLine(data[0]);
    funcPtr(data);
}
void FUN2(int64_t * data);
void FUN3()
{
    int64_t * data;
    void (*funcPtr) (int64_t *) = FUN2;
    data = NULL;
    data = new int64_t[100];
    data[0] = 5LL;
    printLongLongLine(data[0]);
    funcPtr(data);
}
} 
namespace NAMESPACE0
{
void FUN0(int64_t * data)
{
    ; 
}
void FUN2(int64_t * data)
{
    delete[] data;
}
} 
