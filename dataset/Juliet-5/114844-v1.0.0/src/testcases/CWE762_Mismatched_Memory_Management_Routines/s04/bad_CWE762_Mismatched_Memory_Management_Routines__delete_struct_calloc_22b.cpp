namespace NAMESPACE0
{
int VAR1 = 0;
void FUN0(twoIntsStruct * data);
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
    VAR1 = 1; 
    FUN0(data);
}
} 
namespace NAMESPACE0
{
extern int VAR1;
void FUN0(twoIntsStruct * data)
{
    if(VAR1)
    {
<START>
        delete data;
<END>
    }
}
} 
