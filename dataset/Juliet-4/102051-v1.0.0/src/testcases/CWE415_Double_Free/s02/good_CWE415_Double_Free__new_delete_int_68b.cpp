namespace NAMESPACE0
{
int * VAR1;
int * VAR2;
int * VAR3;
void FUN0();
void FUN1();
void FUN2()
{
    int * data;
    data = NULL;
    data = new int;
    VAR2 = data;
    FUN0();
}
void FUN3()
{
    int * data;
    data = NULL;
    data = new int;
    delete data;
    VAR3 = data;
    FUN1();
}
} 
namespace NAMESPACE0
{
extern int * VAR1;
extern int * VAR2;
extern int * VAR3;
void FUN0()
{
    int * data = VAR2;
    delete data;
}
void FUN1()
{
    int * data = VAR3;
    ; 
}
} 
