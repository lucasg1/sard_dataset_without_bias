namespace NAMESPACE0
{
void FUN0(twoIntsStruct * data);
void FUN1(twoIntsStruct * data);
void FUN2()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct[100];
    FUN0(data);
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    data = NULL;
    data = (twoIntsStruct *)realloc(data, 100*sizeof(twoIntsStruct));
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN0(twoIntsStruct * data)
{
    delete [] data;
}
void FUN1(twoIntsStruct * data)
{
    free(data);
}
} 
