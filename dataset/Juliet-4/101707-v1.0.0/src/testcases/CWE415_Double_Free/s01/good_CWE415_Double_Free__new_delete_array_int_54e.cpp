namespace NAMESPACE0
{
void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL;
    data = new int[100];
    FUN0(data);
}
void FUN2(int * data);
void FUN3()
{
    int * data;
    data = NULL;
    data = new int[100];
    delete [] data;
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN5(int * data);
void FUN6(int * data)
{
    FUN5(data);
}
void FUN7(int * data);
void FUN8(int * data)
{
    FUN7(data);
}
} 
namespace NAMESPACE0
{
void FUN9(int * data);
void FUN5(int * data)
{
    FUN9(data);
}
void FUN11(int * data);
void FUN7(int * data)
{
    FUN11(data);
}
} 
namespace NAMESPACE0
{
void FUN6(int * data);
void FUN0(int * data)
{
    FUN6(data);
}
void FUN8(int * data);
void FUN2(int * data)
{
    FUN8(data);
}
} 
namespace NAMESPACE0
{
void FUN9(int * data)
{
    delete [] data;
}
void FUN11(int * data)
{
    ; 
}
} 
