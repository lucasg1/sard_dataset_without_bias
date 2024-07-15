namespace NAMESPACE0
{
twoIntsStruct * FUN0(twoIntsStruct * data)
{
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    return data;
}
twoIntsStruct * FUN1(twoIntsStruct * data)
{
    data = new twoIntsStruct;
    return data;
}
} 
namespace NAMESPACE0
{
twoIntsStruct * FUN0(twoIntsStruct * data);
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    data = FUN0(data);
    free(data);
}
twoIntsStruct * FUN1(twoIntsStruct * data);
void FUN5()
{
    twoIntsStruct * data;
    data = NULL;
    data = FUN1(data);
    delete data;
}
} 
