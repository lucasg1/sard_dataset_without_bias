namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1()
{
    char * data;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    FUN0(data);
}
void FUN2(char * data);
void FUN3()
{
    char * data;
    data = NULL;
    data = new char;
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN5(char * data);
void FUN6(char * data)
{
    FUN5(data);
}
void FUN7(char * data);
void FUN8(char * data)
{
    FUN7(data);
}
} 
namespace NAMESPACE0
{
void FUN6(char * data);
void FUN0(char * data)
{
    FUN6(data);
}
void FUN8(char * data);
void FUN2(char * data)
{
    FUN8(data);
}
} 
namespace NAMESPACE0
{
void FUN5(char * data)
{
    free(data);
}
void FUN7(char * data)
{
    delete data;
}
} 
