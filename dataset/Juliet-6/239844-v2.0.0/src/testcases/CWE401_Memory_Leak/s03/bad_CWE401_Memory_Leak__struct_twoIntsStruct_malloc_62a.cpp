namespace NAMESPACE0
{
void FUN0(struct _twoIntsStruct * &data)
{
    data = (struct _twoIntsStruct *)malloc(100*sizeof(struct _twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
}
} 
namespace NAMESPACE0
{
void FUN0(struct _twoIntsStruct * &data);
void FUN2()
{
    struct _twoIntsStruct * data;
    data = NULL;
    FUN0(data);
<START>
<END>
    ; 
}
} 
