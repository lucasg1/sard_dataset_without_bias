namespace NAMESPACE0
{
struct _twoIntsStruct * VAR1;
struct _twoIntsStruct * VAR2;
struct _twoIntsStruct * VAR3;
void FUN0();
void FUN1()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = new struct _twoIntsStruct;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine((twoIntsStruct *)data);
    VAR1 = data;
    FUN0();
}
} 
namespace NAMESPACE0
{
extern struct _twoIntsStruct * VAR1;
extern struct _twoIntsStruct * VAR2;
extern struct _twoIntsStruct * VAR3;
void FUN0()
{
    struct _twoIntsStruct * data = VAR1;
<START>
<END>
    ; 
}
} 
