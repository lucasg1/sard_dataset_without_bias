namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data);
void FUN1(TwoIntsClass * data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
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
    data = new TwoIntsClass;
    data->intOne = 0;
    data->intTwo = 0;
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN3(TwoIntsClass * data);
void FUN0(TwoIntsClass * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN2(TwoIntsClass * data)
{
<START>
<END>
    ; 
}
} 
