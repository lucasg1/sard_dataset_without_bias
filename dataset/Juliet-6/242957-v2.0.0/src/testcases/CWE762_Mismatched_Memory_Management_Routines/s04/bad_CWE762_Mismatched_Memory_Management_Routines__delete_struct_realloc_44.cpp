namespace NAMESPACE0
{
void FUN0(twoIntsStruct * data)
{
<START>
    delete data;
<END>
}
void FUN1()
{
    twoIntsStruct * data;
    void (*funcPtr) (twoIntsStruct *) = FUN0;
    data = NULL;
    data = NULL;
    data = (twoIntsStruct *)realloc(data, 100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    funcPtr(data);
}
} 
