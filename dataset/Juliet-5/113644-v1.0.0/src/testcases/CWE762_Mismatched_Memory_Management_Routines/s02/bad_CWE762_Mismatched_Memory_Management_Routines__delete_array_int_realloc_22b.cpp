namespace NAMESPACE0
{
int VAR1 = 0;
void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL;
    data = NULL;
    data = (int *)realloc(data, 100*sizeof(int));
    VAR1 = 1; 
    FUN0(data);
}
} 
namespace NAMESPACE0
{
extern int VAR1;
void FUN0(int * data)
{
    if(VAR1)
    {
<START>
        delete [] data;
<END>
    }
}
} 
