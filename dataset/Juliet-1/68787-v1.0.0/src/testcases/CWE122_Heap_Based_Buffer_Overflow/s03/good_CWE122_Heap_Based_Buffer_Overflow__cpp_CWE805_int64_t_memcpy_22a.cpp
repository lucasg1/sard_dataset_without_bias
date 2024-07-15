namespace NAMESPACE0
{
extern int VAR1;
extern int VAR2;
int64_t * FUN0(int64_t * data)
{
    if(VAR1)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int64_t[100];
    }
    return data;
}
int64_t * FUN1(int64_t * data)
{
    if(VAR2)
    {
        data = new int64_t[100];
    }
    return data;
}
} 
namespace NAMESPACE0
{
int VAR1 = 0;
int VAR2 = 0;
int64_t * FUN0(int64_t * data);
void FUN3()
{
    int64_t * data;
    data = NULL;
    VAR1 = 0; 
    data = FUN0(data);
    {
        int64_t source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
        delete [] data;
    }
    ;
}
int64_t * FUN1(int64_t * data);
void FUN5()
{
    int64_t * data;
    data = NULL;
    VAR2 = 1; 
    data = FUN1(data);
    {
        int64_t source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
        delete [] data;
    }
    ;
}
} 
