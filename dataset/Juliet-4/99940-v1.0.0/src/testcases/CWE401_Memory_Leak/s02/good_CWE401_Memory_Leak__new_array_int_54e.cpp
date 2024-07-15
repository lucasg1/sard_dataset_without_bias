namespace NAMESPACE0
{
void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL;
    int VAR1[100];
    data = VAR1;
    data[0] = 5;
    printIntLine(data[0]);
    FUN0(data);
}
void FUN2(int * data);
void FUN3()
{
    int * data;
    data = NULL;
    data = new int[100];
    data[0] = 5;
    printIntLine(data[0]);
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN5(int * data);
void FUN0(int * data)
{
    FUN5(data);
}
void FUN7(int * data);
void FUN2(int * data)
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
void FUN13(int * data);
void FUN9(int * data)
{
    FUN13(data);
}
void FUN15(int * data);
void FUN11(int * data)
{
    FUN15(data);
}
} 
namespace NAMESPACE0
{
void FUN13(int * data)
{
    ; 
}
void FUN15(int * data)
{
    delete[] data;
}
} 
