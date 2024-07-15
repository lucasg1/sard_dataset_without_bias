namespace NAMESPACE0
{
int VAR1 = 0;
void FUN0(struct _twoIntsStruct * data);
void FUN1()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = new struct _twoIntsStruct;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine((twoIntsStruct *)data);
    VAR1 = 1; 
    FUN0(data);
}
} 
namespace NAMESPACE0
{
extern int VAR1;
void FUN0(struct _twoIntsStruct * data)
{
    if(VAR1)
    {
<START>
<END>
        ; 
    }
}
} 
