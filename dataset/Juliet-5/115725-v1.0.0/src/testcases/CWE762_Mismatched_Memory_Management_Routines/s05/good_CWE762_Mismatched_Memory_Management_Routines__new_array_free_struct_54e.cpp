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
void FUN5()
{
    twoIntsStruct * data;
    data = NULL;
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    FUN1(data);
}
void FUN3(twoIntsStruct * data);
void FUN7()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct[100];
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN9(twoIntsStruct * data);
void FUN0(twoIntsStruct * data)
{
    FUN9(data);
}
void FUN11(twoIntsStruct * data);
void FUN2(twoIntsStruct * data)
{
    FUN11(data);
}
} 
namespace NAMESPACE0
{
void FUN13(twoIntsStruct * data);
void FUN9(twoIntsStruct * data)
{
    FUN13(data);
}
void FUN15(twoIntsStruct * data);
void FUN11(twoIntsStruct * data)
{
    FUN15(data);
}
} 
namespace NAMESPACE0
{
void FUN13(twoIntsStruct * data)
{
    free(data);
}
void FUN15(twoIntsStruct * data)
{
    delete [] data;
}
} 
