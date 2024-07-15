namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data);
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass;
    FUN0(data);
}
void FUN2(TwoIntsClass * data);
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass;
    delete data;
    FUN2(data);
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
void FUN9(TwoIntsClass * data);
void FUN5(TwoIntsClass * data)
{
    FUN9(data);
}
void FUN11(TwoIntsClass * data);
void FUN7(TwoIntsClass * data)
{
    FUN11(data);
}
} 
namespace NAMESPACE0
{
void FUN9(TwoIntsClass * data)
{
    delete data;
}
void FUN11(TwoIntsClass * data)
{
    ; 
}
} 
