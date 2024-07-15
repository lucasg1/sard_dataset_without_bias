namespace NAMESPACE0
{
int VAR1 = 0;
void FUN0(TwoIntsClass * data);
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass[100];
    VAR1 = 1; 
    FUN0(data);
}
} 
namespace NAMESPACE0
{
extern int VAR1;
void FUN0(TwoIntsClass * data)
{
    if(VAR1)
    {
<START>
        free(data);
<END>
    }
}
} 
