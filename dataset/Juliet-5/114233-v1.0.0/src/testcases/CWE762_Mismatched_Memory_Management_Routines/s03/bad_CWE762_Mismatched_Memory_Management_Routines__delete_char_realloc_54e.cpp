namespace NAMESPACE0
{
void FUN0(char * data);
void FUN1()
{
    char * data;
    data = NULL;
    data = NULL;
    data = (char *)realloc(data, 100*sizeof(char));
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN2(char * data);
void FUN3(char * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN4(char * data);
void FUN2(char * data)
{
    FUN4(data);
}
} 
namespace NAMESPACE0
{
void FUN3(char * data);
void FUN0(char * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN4(char * data)
{
<START>
    delete data;
<END>
}
} 
