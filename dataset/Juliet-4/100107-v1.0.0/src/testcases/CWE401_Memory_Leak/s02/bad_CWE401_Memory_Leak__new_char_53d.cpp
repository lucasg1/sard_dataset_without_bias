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
void FUN0(char * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN1(char * data);
void FUN5()
{
    char * data;
    data = NULL;
    data = new char;
    *data = 'A';
    printHexCharLine(*data);
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN2(char * data)
{
<START>
<END>
    ; 
}
} 
