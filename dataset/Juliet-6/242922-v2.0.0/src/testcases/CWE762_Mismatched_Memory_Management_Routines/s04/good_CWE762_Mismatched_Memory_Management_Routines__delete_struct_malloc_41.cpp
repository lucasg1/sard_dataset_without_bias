namespace NAMESPACE0
{
void FUN0(twoIntsStruct * data)
{
    delete data;
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct;
    FUN0(data);
}
void FUN2(twoIntsStruct * data)
{
    free(data);
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    FUN2(data);
}
} 
