namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data);
void FUN1(TwoIntsClass * data)
{
    FUN0(data);
}
void FUN2(TwoIntsClass * data);
void FUN3(TwoIntsClass * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN1(TwoIntsClass * data);
void FUN5()
{
    TwoIntsClass * data;
    data = NULL;
    TwoIntsClass VAR2[100];
    data = VAR2;
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printIntLine(data[0].intOne);
    printIntLine(data[0].intTwo);
    FUN1(data);
}
void FUN3(TwoIntsClass * data);
void FUN7()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass[100];
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printIntLine(data[0].intOne);
    printIntLine(data[0].intTwo);
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN9(TwoIntsClass * data);
void FUN10(TwoIntsClass * data)
{
    FUN9(data);
}
void FUN11(TwoIntsClass * data);
void FUN12(TwoIntsClass * data)
{
    FUN11(data);
}
} 
namespace NAMESPACE0
{
void FUN10(TwoIntsClass * data);
void FUN0(TwoIntsClass * data)
{
    FUN10(data);
}
void FUN12(TwoIntsClass * data);
void FUN2(TwoIntsClass * data)
{
    FUN12(data);
}
} 
namespace NAMESPACE0
{
void FUN9(TwoIntsClass * data)
{
    ; 
}
void FUN11(TwoIntsClass * data)
{
    delete[] data;
}
} 
