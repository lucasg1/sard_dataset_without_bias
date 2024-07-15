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
void FUN1(char * data);
void FUN5(char * data)
{
    FUN1(data);
}
void FUN3(char * data);
void FUN7(char * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN5(char * data);
void FUN9()
{
    char * data;
    data = NULL;
    data = new char[100];
    FUN5(data);
}
void FUN7(char * data);
void FUN11()
{
    char * data;
    data = NULL;
    data = (char *)calloc(100, sizeof(char));
    FUN7(data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * data)
{
    delete [] data;
}
void FUN2(char * data)
{
    free(data);
}
} 
