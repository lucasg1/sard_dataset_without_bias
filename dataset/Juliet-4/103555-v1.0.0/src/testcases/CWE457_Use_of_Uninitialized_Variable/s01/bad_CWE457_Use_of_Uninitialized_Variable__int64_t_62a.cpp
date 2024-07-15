namespace NAMESPACE0
{
void FUN0(int64_t &data)
{
    ; 
}
} 
namespace NAMESPACE0
{
void FUN0(int64_t &data);
void FUN2()
{
    int64_t data;
    FUN0(data);
<START>
    printLongLongLine(data);
<END>
}
} 
