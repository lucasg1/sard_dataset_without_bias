namespace NAMESPACE0
{
void FUN0(struct _twoIntsStruct * data);
void FUN1(struct _twoIntsStruct * data)
{
    FUN0(data);
}
void FUN2(struct _twoIntsStruct * data);
void FUN3(struct _twoIntsStruct * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN4(struct _twoIntsStruct * data);
void FUN5()
{
    struct _twoIntsStruct * data;
    data = NULL;
    struct _twoIntsStruct VAR2[100];
    data = VAR2;
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    FUN4(data);
}
void FUN6(struct _twoIntsStruct * data);
void FUN7()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = new struct _twoIntsStruct[100];
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN1(struct _twoIntsStruct * data);
void FUN4(struct _twoIntsStruct * data)
{
    FUN1(data);
}
void FUN3(struct _twoIntsStruct * data);
void FUN6(struct _twoIntsStruct * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN13(struct _twoIntsStruct * data);
void FUN0(struct _twoIntsStruct * data)
{
    FUN13(data);
}
void FUN15(struct _twoIntsStruct * data);
void FUN2(struct _twoIntsStruct * data)
{
    FUN15(data);
}
} 
namespace NAMESPACE0
{
void FUN13(struct _twoIntsStruct * data)
{
    ; 
}
void FUN15(struct _twoIntsStruct * data)
{
    delete[] data;
}
} 
