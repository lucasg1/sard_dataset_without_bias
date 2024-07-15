namespace NAMESPACE0
{
int VAR1 = 0;
int VAR2 = 0;
int VAR3 = 0;
void FUN0(long * data);
void FUN1()
{
    long * data;
    data = NULL;
    data = new long;
    delete data;
    VAR1 = 0; 
    FUN0(data);
}
void FUN2(long * data);
void FUN3()
{
    long * data;
    data = NULL;
    data = new long;
    delete data;
    VAR2 = 1; 
    FUN2(data);
}
void FUN4(long * data);
void FUN5()
{
    long * data;
    data = NULL;
    data = new long;
    VAR3 = 1; 
    FUN4(data);
}
} 
namespace NAMESPACE0
{
extern int VAR1;
extern int VAR2;
extern int VAR3;
void FUN0(long * data)
{
    if(VAR1)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ; 
    }
}
void FUN2(long * data)
{
    if(VAR2)
    {
        ; 
    }
}
void FUN4(long * data)
{
    if(VAR3)
    {
        delete data;
    }
}
} 
