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
void FUN1(char * data);
void FUN3()
{
    char * data;
    data = NULL;
    data = new char[100];
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * data)
{
<START>
    free(data);
<END>
}
} 
