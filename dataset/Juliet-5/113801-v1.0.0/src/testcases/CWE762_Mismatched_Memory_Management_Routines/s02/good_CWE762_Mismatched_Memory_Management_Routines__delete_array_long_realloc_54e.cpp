namespace NAMESPACE0
{
void FUN0(long * data);
void FUN1(long * data)
{
    FUN0(data);
}
void FUN2(long * data);
void FUN3(long * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN4(long * data);
void FUN0(long * data)
{
    FUN4(data);
}
void FUN6(long * data);
void FUN2(long * data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN1(long * data);
void FUN9()
{
    long * data;
    data = NULL;
    data = new long[100];
    FUN1(data);
}
void FUN3(long * data);
void FUN11()
{
    long * data;
    data = NULL;
    data = NULL;
    data = (long *)realloc(data, 100*sizeof(long));
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN13(long * data);
void FUN4(long * data)
{
    FUN13(data);
}
void FUN15(long * data);
void FUN6(long * data)
{
    FUN15(data);
}
} 
namespace NAMESPACE0
{
void FUN13(long * data)
{
    delete [] data;
}
void FUN15(long * data)
{
    free(data);
}
} 
