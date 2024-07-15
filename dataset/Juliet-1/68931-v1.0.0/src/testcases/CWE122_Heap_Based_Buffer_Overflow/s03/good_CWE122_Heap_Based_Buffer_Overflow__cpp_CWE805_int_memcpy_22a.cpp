namespace NAMESPACE0
{
extern int VAR1;
extern int VAR2;
int * FUN0(int * data)
{
    if(VAR1)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int[100];
    }
    return data;
}
int * FUN1(int * data)
{
    if(VAR2)
    {
        data = new int[100];
    }
    return data;
}
} 
namespace NAMESPACE0
{
int VAR1 = 0;
int VAR2 = 0;
int * FUN0(int * data);
void FUN3()
{
    int * data;
    data = NULL;
    VAR1 = 0; 
    data = FUN0(data);
    {
        int source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int));
        printIntLine(data[0]);
        delete [] data;
    }
    ;
}
int * FUN1(int * data);
void FUN5()
{
    int * data;
    data = NULL;
    VAR2 = 1; 
    data = FUN1(data);
    {
        int source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int));
        printIntLine(data[0]);
        delete [] data;
    }
    ;
}
} 
