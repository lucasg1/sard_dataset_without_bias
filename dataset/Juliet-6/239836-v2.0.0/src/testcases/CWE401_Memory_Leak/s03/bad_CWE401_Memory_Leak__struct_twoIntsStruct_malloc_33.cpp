namespace NAMESPACE0
{
void FUN0()
{
    struct _twoIntsStruct * data;
    struct _twoIntsStruct * &dataRef = data;
    data = NULL;
    data = (struct _twoIntsStruct *)malloc(100*sizeof(struct _twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    {
        struct _twoIntsStruct * data = dataRef;
<START>
<END>
        ; 
    }
}
} 
