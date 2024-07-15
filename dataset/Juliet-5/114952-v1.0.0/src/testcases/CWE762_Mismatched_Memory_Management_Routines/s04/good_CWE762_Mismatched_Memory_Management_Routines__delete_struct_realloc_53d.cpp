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
void FUN1(twoIntsStruct * data);
void FUN5(twoIntsStruct * data)
{
    FUN1(data);
}
void FUN3(twoIntsStruct * data);
void FUN7(twoIntsStruct * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN5(twoIntsStruct * data);
void FUN9()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct;
    FUN5(data);
}
void FUN7(twoIntsStruct * data);
void FUN11()
{
    twoIntsStruct * data;
    data = NULL;
    data = NULL;
    data = (twoIntsStruct *)realloc(data, 100*sizeof(twoIntsStruct));
    FUN7(data);
}
} 
namespace NAMESPACE0
{
void FUN0(twoIntsStruct * data)
{
    delete data;
}
void FUN2(twoIntsStruct * data)
{
    free(data);
}
} 
