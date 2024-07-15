namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1()
{
    char * data;
    data = NULL;
    data = new char[100];
    FUN0(data);
}
void FUN2(char * data);
void FUN3()
{
    char * data;
    data = NULL;
    data = new char[100];
    delete [] data;
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN5(char * data);
void FUN0(char * data)
{
    FUN5(data);
}
void FUN7(char * data);
void FUN2(char * data)
{
    FUN7(data);
}
} 
namespace NAMESPACE0
{
void FUN5(char * data)
{
    delete [] data;
}
void FUN7(char * data)
{
    ; 
}
} 
