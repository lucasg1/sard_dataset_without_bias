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
void FUN0(TwoIntsClass * data)
{
    FUN4(data);
}
void FUN6(TwoIntsClass * data);
void FUN2(TwoIntsClass * data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN1(TwoIntsClass * data);
void FUN9(TwoIntsClass * data)
{
    FUN1(data);
}
void FUN3(TwoIntsClass * data);
void FUN11(TwoIntsClass * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN9(TwoIntsClass * data);
void FUN13()
{
    TwoIntsClass * data;
    data = NULL;
    data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
    FUN9(data);
}
void FUN11(TwoIntsClass * data);
void FUN15()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass[100];
    FUN11(data);
}
} 
namespace NAMESPACE0
{
void FUN4(TwoIntsClass * data)
{
    free(data);
}
void FUN6(TwoIntsClass * data)
{
    delete [] data;
}
} 
