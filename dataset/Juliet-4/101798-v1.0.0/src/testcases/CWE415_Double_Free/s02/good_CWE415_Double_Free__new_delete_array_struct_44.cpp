namespace NAMESPACE0
{
void FUN0(twoIntsStruct * data)
{
    delete [] data;
}
void FUN1()
{
    twoIntsStruct * data;
    void (*funcPtr) (twoIntsStruct *) = FUN0;
    data = NULL;
    data = new twoIntsStruct[100];
    funcPtr(data);
}
void FUN2(twoIntsStruct * data)
{
    ; 
}
void FUN3()
{
    twoIntsStruct * data;
    void (*funcPtr) (twoIntsStruct *) = FUN2;
    data = NULL;
    data = new twoIntsStruct[100];
    delete [] data;
    funcPtr(data);
}
} 
