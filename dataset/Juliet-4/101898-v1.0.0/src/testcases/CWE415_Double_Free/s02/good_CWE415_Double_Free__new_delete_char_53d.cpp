namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN2(char * data);
void FUN3(char * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN4(char * data);
void FUN0(char * data)
{
    FUN4(data);
}
void FUN6(char * data);
void FUN2(char * data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN1(char * data);
void FUN9()
{
    char * data;
    data = NULL;
    data = new char;
    FUN1(data);
}
void FUN3(char * data);
void FUN11()
{
    char * data;
    data = NULL;
    data = new char;
    delete data;
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN4(char * data)
{
    delete data;
}
void FUN6(char * data)
{
    ; 
}
} 
