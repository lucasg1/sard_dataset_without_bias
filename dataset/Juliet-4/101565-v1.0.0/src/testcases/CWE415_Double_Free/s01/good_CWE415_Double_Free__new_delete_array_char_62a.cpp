namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = new char[100];
}
void FUN1(char * &data)
{
    data = new char[100];
    delete [] data;
}
} 
namespace NAMESPACE0
{
void FUN0(char * &data);
void FUN3()
{
    char * data;
    data = NULL;
    FUN0(data);
    delete [] data;
}
void FUN1(char * &data);
void FUN5()
{
    char * data;
    data = NULL;
    FUN1(data);
    ; 
}
} 
