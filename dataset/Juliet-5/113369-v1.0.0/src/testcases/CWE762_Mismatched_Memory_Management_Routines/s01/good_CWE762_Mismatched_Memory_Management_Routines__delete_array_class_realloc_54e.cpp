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
void FUN8(TwoIntsClass * data);
void FUN4(TwoIntsClass * data)
{
    FUN8(data);
}
void FUN10(TwoIntsClass * data);
void FUN6(TwoIntsClass * data)
{
    FUN10(data);
}
} 
namespace NAMESPACE0
{
void FUN1(TwoIntsClass * data);
void FUN13()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass[100];
    FUN1(data);
}
void FUN3(TwoIntsClass * data);
void FUN15()
{
    TwoIntsClass * data;
    data = NULL;
    data = NULL;
    data = (TwoIntsClass *)realloc(data, 100*sizeof(TwoIntsClass));
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN8(TwoIntsClass * data)
{
    delete [] data;
}
void FUN10(TwoIntsClass * data)
{
    free(data);
}
} 
