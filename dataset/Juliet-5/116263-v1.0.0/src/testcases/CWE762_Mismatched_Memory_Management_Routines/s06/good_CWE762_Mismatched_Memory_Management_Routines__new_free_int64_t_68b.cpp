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
    data = (int64_t *)malloc(100*sizeof(int64_t));
    VAR2 = data;
    FUN0();
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    data = new int64_t;
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
    free(data);
}
void FUN1()
{
    int64_t * data = VAR3;
    delete data;
}
} 
