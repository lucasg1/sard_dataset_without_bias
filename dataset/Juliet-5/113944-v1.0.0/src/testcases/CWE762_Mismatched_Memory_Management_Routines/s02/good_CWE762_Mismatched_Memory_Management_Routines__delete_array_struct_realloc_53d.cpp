namespace NAMESPACE0
{
void FUN0(twoIntsStruct * data);
void FUN1(twoIntsStruct * data)
{
    FUN0(data);
}
void FUN2(twoIntsStruct * data);
void FUN3(twoIntsStruct * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN4(twoIntsStruct * data);
void FUN0(twoIntsStruct * data)
{
    FUN4(data);
}
void FUN6(twoIntsStruct * data);
void FUN2(twoIntsStruct * data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN1(twoIntsStruct * data);
void FUN9()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct[100];
    FUN1(data);
}
void FUN3(twoIntsStruct * data);
void FUN11()
{
    twoIntsStruct * data;
    data = NULL;
    data = NULL;
    data = (twoIntsStruct *)realloc(data, 100*sizeof(twoIntsStruct));
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN4(twoIntsStruct * data)
{
    delete [] data;
}
void FUN6(twoIntsStruct * data)
{
    free(data);
}
} 
