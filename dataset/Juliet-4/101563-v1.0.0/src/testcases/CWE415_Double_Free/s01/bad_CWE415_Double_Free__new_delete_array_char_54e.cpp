namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1()
{
    char * data;
    data = NULL;
    data = new char[100];
    delete [] data;
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN2(char * data);
void FUN0(char * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN4(char * data);
void FUN5(char * data)
{
    FUN4(data);
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
void FUN4(char * data)
{
<START>
    delete [] data;
<END>
}
} 
