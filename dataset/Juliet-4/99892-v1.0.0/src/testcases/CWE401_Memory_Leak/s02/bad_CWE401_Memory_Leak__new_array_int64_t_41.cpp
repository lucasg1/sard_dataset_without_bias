namespace NAMESPACE0
{
void FUN0(int64_t * data)
{
<START>
<END>
    ; 
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = new int64_t[100];
    data[0] = 5LL;
    printLongLongLine(data[0]);
    FUN0(data);
}
} 
