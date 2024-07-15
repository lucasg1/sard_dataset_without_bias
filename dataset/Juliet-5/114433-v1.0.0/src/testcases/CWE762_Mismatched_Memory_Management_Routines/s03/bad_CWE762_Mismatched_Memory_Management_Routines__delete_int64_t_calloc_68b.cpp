namespace NAMESPACE0
{
int64_t * VAR1;
int64_t * VAR2;
int64_t * VAR3;
void FUN0();
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)calloc(100, sizeof(int64_t));
    VAR1 = data;
    FUN0();
}
} 
namespace NAMESPACE0
{
extern int64_t * VAR1;
extern int64_t * VAR2;
extern int64_t * VAR3;
void FUN0()
{
    int64_t * data = VAR1;
<START>
    delete data;
<END>
}
} 
