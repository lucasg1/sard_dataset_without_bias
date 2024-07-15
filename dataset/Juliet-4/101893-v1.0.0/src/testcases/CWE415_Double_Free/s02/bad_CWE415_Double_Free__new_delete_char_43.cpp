namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = new char;
    delete data;
}
void FUN1()
{
    char * data;
    data = NULL;
    FUN0(data);
<START>
    delete data;
<END>
}
} 
