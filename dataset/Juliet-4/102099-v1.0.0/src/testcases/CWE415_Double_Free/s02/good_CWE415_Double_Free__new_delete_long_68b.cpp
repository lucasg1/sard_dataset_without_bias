namespace NAMESPACE0
{
long * VAR1;
long * VAR2;
long * VAR3;
void FUN0();
void FUN1();
void FUN2()
{
    long * data;
    data = NULL;
    data = new long;
    VAR2 = data;
    FUN0();
}
void FUN3()
{
    long * data;
    data = NULL;
    data = new long;
    delete data;
    VAR3 = data;
    FUN1();
}
} 
namespace NAMESPACE0
{
extern long * VAR1;
extern long * VAR2;
extern long * VAR3;
void FUN0()
{
    long * data = VAR2;
    delete data;
}
void FUN1()
{
    long * data = VAR3;
    ; 
}
} 
