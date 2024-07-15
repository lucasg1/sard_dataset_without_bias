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
void FUN9(char * data)
{
    FUN1(data);
}
void FUN3(char * data);
void FUN11(char * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN9(char * data);
void FUN13()
{
    char * data;
    data = NULL;
    data = new char[100];
    FUN9(data);
}
void FUN11(char * data);
void FUN15()
{
    char * data;
    data = NULL;
    data = new char;
    FUN11(data);
}
} 
namespace NAMESPACE0
{
void FUN4(char * data)
{
    delete [] data;
}
void FUN6(char * data)
{
    delete data;
}
} 
