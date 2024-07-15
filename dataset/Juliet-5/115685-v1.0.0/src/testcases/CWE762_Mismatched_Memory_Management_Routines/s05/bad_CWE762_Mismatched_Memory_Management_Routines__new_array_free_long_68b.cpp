namespace NAMESPACE0
{
long * VAR1;
long * VAR2;
long * VAR3;
void FUN0();
void FUN1()
{
    long * data;
    data = NULL;
    data = new long[100];
    VAR1 = data;
    FUN0();
}
} 
namespace NAMESPACE0
{
extern long * VAR1;
extern long * VAR2;
extern long * VAR3;
void FUN0()
{
    long * data = VAR1;
<START>
    free(data);
<END>
}
} 
