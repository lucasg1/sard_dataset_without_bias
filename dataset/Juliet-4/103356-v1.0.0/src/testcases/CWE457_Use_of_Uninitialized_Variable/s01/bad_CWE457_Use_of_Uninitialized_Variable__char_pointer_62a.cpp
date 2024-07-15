namespace NAMESPACE0
{
void FUN0(char * &data)
{
    ; 
}
} 
namespace NAMESPACE0
{
void FUN0(char * &data);
void FUN2()
{
    char * data;
    FUN0(data);
<START>
    printLine(data);
<END>
}
} 
