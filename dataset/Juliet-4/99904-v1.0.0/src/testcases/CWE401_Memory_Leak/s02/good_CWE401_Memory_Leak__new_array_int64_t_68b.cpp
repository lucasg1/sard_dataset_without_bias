namespace NAMESPACE0
{
int64_t * VAR1;
int64_t * VAR2;
int64_t * VAR3;
void FUN0();
void FUN1();
void FUN2()
{
    int64_t * data;
    data = NULL;
    int64_t VAR4[100];
    data = VAR4;
    data[0] = 5LL;
    printLongLongLine(data[0]);
    VAR2 = data;
    FUN0();
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    data = new int64_t[100];
    data[0] = 5LL;
    printLongLongLine(data[0]);
    VAR3 = data;
    FUN1();
}
} 
namespace NAMESPACE0
{
extern int64_t * VAR1;
extern int64_t * VAR2;
extern int64_t * VAR3;
void FUN0()
{
    int64_t * data = VAR2;
    ; 
}
void FUN1()
{
    int64_t * data = VAR3;
    delete[] data;
}
} 
