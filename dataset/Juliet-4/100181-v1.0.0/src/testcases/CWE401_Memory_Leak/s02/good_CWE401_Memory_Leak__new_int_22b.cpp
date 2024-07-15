namespace NAMESPACE0
{
int VAR1 = 0;
int VAR2 = 0;
int VAR3 = 0;
void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL;
    data = new int;
    *data = 5;
    printIntLine(*data);
    VAR1 = 0; 
    FUN0(data);
}
void FUN2(int * data);
void FUN3()
{
    int * data;
    data = NULL;
    data = new int;
    *data = 5;
    printIntLine(*data);
    VAR2 = 1; 
    FUN2(data);
}
void FUN4(int * data);
void FUN5()
{
    int * data;
    data = NULL;
    int VAR4;
    data = &VAR4;
    *data = 5;
    printIntLine(*data);
    VAR3 = 1; 
    FUN4(data);
}
} 
namespace NAMESPACE0
{
extern int VAR1;
extern int VAR2;
extern int VAR3;
void FUN0(int * data)
{
    if(VAR1)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        delete data;
    }
}
void FUN2(int * data)
{
    if(VAR2)
    {
        delete data;
    }
}
void FUN4(int * data)
{
    if(VAR3)
    {
        ; 
    }
}
} 
