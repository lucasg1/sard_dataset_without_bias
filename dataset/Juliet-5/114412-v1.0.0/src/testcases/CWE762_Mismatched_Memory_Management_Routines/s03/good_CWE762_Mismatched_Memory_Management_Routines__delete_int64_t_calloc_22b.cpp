namespace NAMESPACE0
{
int VAR1 = 0;
int VAR2 = 0;
int VAR3 = 0;
void FUN0(int64_t * data);
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)calloc(100, sizeof(int64_t));
    VAR1 = 0; 
    FUN0(data);
}
void FUN2(int64_t * data);
void FUN3()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)calloc(100, sizeof(int64_t));
    VAR2 = 1; 
    FUN2(data);
}
void FUN4(int64_t * data);
void FUN5()
{
    int64_t * data;
    data = NULL;
    data = new int64_t;
    VAR3 = 1; 
    FUN4(data);
}
} 
namespace NAMESPACE0
{
extern int VAR1;
extern int VAR2;
extern int VAR3;
void FUN0(int64_t * data)
{
    if(VAR1)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        free(data);
    }
}
void FUN2(int64_t * data)
{
    if(VAR2)
    {
        free(data);
    }
}
void FUN4(int64_t * data)
{
    if(VAR3)
    {
        delete data;
    }
}
} 
