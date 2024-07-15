namespace NAMESPACE0
{
void FUN0(twoIntsStruct * * data);
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct[100];
    FUN0(&data);
}
void FUN2(twoIntsStruct * * data);
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    FUN2(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(twoIntsStruct * * dataPtr)
{
    twoIntsStruct * data = *dataPtr;
    delete [] data;
}
void FUN2(twoIntsStruct * * dataPtr)
{
    twoIntsStruct * data = *dataPtr;
    free(data);
}
} 
