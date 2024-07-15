namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = "string";
}
void FUN1(char * &data)
{
    ; 
}
} 
namespace NAMESPACE0
{
void FUN0(char * &data);
void FUN3()
{
    char * data;
    FUN0(data);
    printLine(data);
}
void FUN1(char * &data);
void FUN5()
{
    char * data;
    FUN1(data);
    data = "string";
    printLine(data);
}
} 
