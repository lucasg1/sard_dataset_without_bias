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
void FUN4(TwoIntsClass * data);
void FUN5(TwoIntsClass * data)
{
    FUN4(data);
}
void FUN6(TwoIntsClass * data);
void FUN7(TwoIntsClass * data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN1(TwoIntsClass * data);
void FUN9()
{
    TwoIntsClass * data;
    data = NULL;
    TwoIntsClass VAR3;
    data = &VAR3;
    data->intOne = 0;
    data->intTwo = 0;
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
    FUN1(data);
}
void FUN3(TwoIntsClass * data);
void FUN11()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass;
    data->intOne = 0;
    data->intTwo = 0;
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN5(TwoIntsClass * data);
void FUN0(TwoIntsClass * data)
{
    FUN5(data);
}
void FUN7(TwoIntsClass * data);
void FUN2(TwoIntsClass * data)
{
    FUN7(data);
}
} 
namespace NAMESPACE0
{
void FUN4(TwoIntsClass * data)
{
    ; 
}
void FUN6(TwoIntsClass * data)
{
    delete data;
}
} 
