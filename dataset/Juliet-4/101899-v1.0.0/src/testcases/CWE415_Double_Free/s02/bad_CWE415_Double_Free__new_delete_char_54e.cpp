namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN2(char * data);
void FUN3()
{
    char * data;
    data = NULL;
    data = new char;
    delete data;
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
} 
namespace NAMESPACE0
{
void FUN5(char * data);
void FUN2(char * data)
{
    FUN5(data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * data)
{
<START>
    delete data;
<END>
}
} 
