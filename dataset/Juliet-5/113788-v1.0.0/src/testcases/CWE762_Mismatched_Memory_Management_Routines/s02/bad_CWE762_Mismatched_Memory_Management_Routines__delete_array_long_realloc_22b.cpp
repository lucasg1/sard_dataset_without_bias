namespace NAMESPACE0
{
int VAR1 = 0;
void FUN0(long * data);
void FUN1()
{
    long * data;
    data = NULL;
    data = NULL;
    data = (long *)realloc(data, 100*sizeof(long));
    VAR1 = 1; 
    FUN0(data);
}
} 
namespace NAMESPACE0
{
extern int VAR1;
void FUN0(long * data)
{
    if(VAR1)
    {
<START>
        delete [] data;
<END>
    }
}
} 
