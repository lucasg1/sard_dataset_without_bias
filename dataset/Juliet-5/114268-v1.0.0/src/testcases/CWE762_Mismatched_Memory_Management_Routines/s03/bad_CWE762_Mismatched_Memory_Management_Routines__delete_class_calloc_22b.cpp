namespace NAMESPACE0
{
int VAR1 = 0;
void FUN0(TwoIntsClass * data);
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    data = (TwoIntsClass *)calloc(100, sizeof(TwoIntsClass));
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
        delete data;
<END>
    }
}
} 
