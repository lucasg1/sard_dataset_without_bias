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
void FUN5()
{
    char * data;
    data = NULL;
    data = new char;
    FUN4(data);
}
void FUN6(char * data);
void FUN7()
{
    char * data;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN1(char * data);
void FUN4(char * data)
{
    FUN1(data);
}
void FUN3(char * data);
void FUN6(char * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * data)
{
    delete data;
}
void FUN2(char * data)
{
    free(data);
}
} 
