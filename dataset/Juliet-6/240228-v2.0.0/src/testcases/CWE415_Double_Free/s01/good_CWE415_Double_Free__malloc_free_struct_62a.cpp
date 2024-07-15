namespace NAMESPACE0
{
void FUN0(twoIntsStruct * &data)
{
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
}
void FUN1(twoIntsStruct * &data)
{
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    free(data);
}
} 
namespace NAMESPACE0
{
void FUN0(twoIntsStruct * &data);
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    FUN0(data);
    free(data);
}
void FUN1(twoIntsStruct * &data);
void FUN5()
{
    twoIntsStruct * data;
    data = NULL;
    FUN1(data);
    ; 
}
} 
