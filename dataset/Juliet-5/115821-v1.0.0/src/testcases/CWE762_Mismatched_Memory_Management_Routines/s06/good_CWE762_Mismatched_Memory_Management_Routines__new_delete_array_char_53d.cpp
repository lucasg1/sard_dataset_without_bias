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
    data = new char;
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
void FUN9(char * data);
void FUN5(char * data)
{
    FUN9(data);
}
void FUN11(char * data);
void FUN7(char * data)
{
    FUN11(data);
}
} 
namespace NAMESPACE0
{
void FUN9(char * data)
{
    delete [] data;
}
void FUN11(char * data)
{
    delete data;
}
} 
