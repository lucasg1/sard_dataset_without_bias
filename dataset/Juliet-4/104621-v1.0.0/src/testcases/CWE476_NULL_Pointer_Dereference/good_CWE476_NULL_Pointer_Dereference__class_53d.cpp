namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data);
void FUN1()
{
    TwoIntsClass * data;
    {
        TwoIntsClass * tmpData = new TwoIntsClass;
        tmpData->intOne = 0;
        tmpData->intOne = 0;
        data = tmpData;
    }
    FUN0(data);
}
void FUN2(TwoIntsClass * data);
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
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
    printIntLine(data->intOne);
    delete data;
}
void FUN11(TwoIntsClass * data)
{
    if (data != NULL)
    {
        printIntLine(data->intOne);
        delete data;
    }
    else
    {
        printLine("data is NULL");
    }
}
} 
