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
    VAR1 = 0; 
    FUN0(data);
}
void FUN2(int * data);
void FUN3()
{
    int * data;
    data = NULL;
    data = new int;
    VAR2 = 1; 
    FUN2(data);
}
void FUN4(int * data);
void FUN5()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
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
        free(data);
    }
}
} 
