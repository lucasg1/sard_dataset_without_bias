namespace NAMESPACE0
{
void FUN0(twoIntsStruct * &data)
{
    data = new twoIntsStruct[100];
}
void FUN1(twoIntsStruct * &data)
{
    data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
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
    delete [] data;
}
void FUN1(twoIntsStruct * &data);
void FUN5()
{
    twoIntsStruct * data;
    data = NULL;
    FUN1(data);
    free(data);
}
} 
