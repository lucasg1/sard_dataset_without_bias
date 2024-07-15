namespace NAMESPACE0
{
void FUN0(twoIntsStruct * data)
{
    delete data;
}
void FUN1()
{
    twoIntsStruct * data;
    void (*funcPtr) (twoIntsStruct *) = FUN0;
    data = NULL;
    data = new twoIntsStruct;
    funcPtr(data);
}
void FUN2(twoIntsStruct * data)
{
    free(data);
}
void FUN3()
{
    twoIntsStruct * data;
    void (*funcPtr) (twoIntsStruct *) = FUN2;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    funcPtr(data);
}
} 
